#include "BitcoinExchange.hpp"
#include <fstream>

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange( const BitcoinExchange& other ) {
    this->database = other.database;
}

BitcoinExchange& BitcoinExchange::operator=( const BitcoinExchange& other ) {
    if (this != &other) {
        this->database = other.database;
    }
    return *this;
}

BitcoinExchange::~BitcoinExchange() {}


BitcoinExchange::BitcoinExchange( const std::string& dbFile ) {
    std::ifstream file(dbFile.c_str());
    std::string line;
    while (std::getline(file, line))
    {
        std::string date = line.substr(0, line.find(','));
        float rate = std::strtof(line.substr(line.find(',') + 1).c_str(), NULL);
        database[date] = rate;
    }
}

bool BitcoinExchange::isLeapYear( int year ) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool BitcoinExchange::isValidDate( const std::string& date ) {
    if (date.length() - 1 != 10 || date[4] != '-' || date[7] != '-') {
        return false;
    }

    int year = std::stoi(date.substr(0, 4).c_str());
    int month = std::stoi(date.substr(5, 2).c_str());
    int day = std::stoi(date.substr(8, 2).c_str());

    if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31) {
        return false;
    }

    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
        return false;
    }

    if (month == 2) {
        if (isLeapYear(year)) {
            if (day > 29) {
                return false;
            }
        } else {
            if (day > 28) {
                return false;
            }
        }
    }

    return true;
}

void BitcoinExchange::processInput( const std::string& inFile ) {
    std::ifstream file(inFile.c_str());
    std::string line;

    std::getline(file, line);
    while (std::getline(file, line)) {
        size_t Pos = line.find('|');
        if (Pos == std::string::npos) {
            std::cout << "Error: Bad input => " << line << std::endl;
            continue;
        }

        std::string date = line.substr(0, line.find('|'));
        std::string valueStr = line.substr(line.find('|') + 1);
        if (date == "date") {
            continue;
        }
        if (!isValidDate(date)) {
            std::cout << "Error: Invalid date => " << date << std::endl;
            continue;
        }

        float value = std::strtof(valueStr.c_str(), NULL);
        if (value < 0) {
            std::cout << "Error: Not a positive number." << std::endl;
            continue;
        }
        if (value > 1000) {
            std::cout << "Error: Too large a number."<< std::endl;
            continue;
        }

        std::map<std::string, float>::const_iterator it = database.lower_bound(date);
        if (it == database.begin() || it ->first != date) {
            if (it != database.begin()) {
                --it;
            } else {
                std::cout << "Error: No valid date found for  " << date << std::endl;
                continue;
            }
        }

        float btc = value * it->second;
        std::cout << date << " => " << value << " = " << btc << std::endl;
    }
}