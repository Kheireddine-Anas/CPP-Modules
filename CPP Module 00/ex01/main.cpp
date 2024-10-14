#include <iostream>
#include "PhoneBook.hpp"

int main() {
    PhoneBook phoneBook;
    std::string command;

    while (true) {
        std::cout << "\033[33mCommand : \033[0m";
        if (!std::getline(std::cin, command))
            break;
        if (command == "ADD") {
            phoneBook.addContact();
        } else if (command == "SEARCH") {
            phoneBook.searchContact();
        } else if (command == "EXIT") {
            break;
        } else {
            std::cout << "\033[31mInvalid command. Please try again.\033[0m" << std::endl;
        }
    }

    return 0;
}
