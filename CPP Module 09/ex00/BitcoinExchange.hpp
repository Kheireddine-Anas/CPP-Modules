#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>
#include <map>

class BitcoinExchange {
    private:
        std::map<std::string, float> database;
        bool isLeapYear( int year );
        bool isValidDate( const std::string& date );

    public:
        BitcoinExchange();
        BitcoinExchange( const BitcoinExchange &other );
        BitcoinExchange& operator=( const BitcoinExchange &other );
        ~BitcoinExchange();

        BitcoinExchange( const std::string& dbFile );

        void processInput( const std::string& inFile );
};

#endif
