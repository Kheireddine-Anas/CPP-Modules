#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() : index(0), count(0) {}

void PhoneBook::addContact() {
    Contact newContact;
    std::string input;

    std::cout << "Enter first name: ";
    std::getline(std::cin, input);
    if (input.empty()) return;
    newContact.setFirstName(input);

    std::cout << "Enter last name: ";
    std::getline(std::cin, input);
    if (input.empty()) return;
    newContact.setLastName(input);

    std::cout << "Enter nickname: ";
    std::getline(std::cin, input);
    if (input.empty()) return;
    newContact.setNickname(input);

    std::cout << "Enter phone number: ";
    std::getline(std::cin, input);
    if (input.empty()) return;
    newContact.setPhoneNumber(input);

    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, input);
    if (input.empty()) return;
    newContact.setDarkestSecret(input);

    contacts[index] = newContact;
    index = (index + 1) % 8;
    if (count < 8) count++;
}

void PhoneBook::printContact(const Contact& contact, int index) const {
    std::cout << "|" << std::setw(10) << std::right << index
              << "|" << std::setw(10) << std::right << contact.getFirstName().substr(0, 10)
              << "|" << std::setw(10) << std::right << contact.getLastName().substr(0, 10)
              << "|" << std::setw(10) << std::right << contact.getNickname().substr(0, 10) << "|" << std::endl;
}

void PhoneBook::searchContact() const {
    if (count == 0) {
        std::cout << "No contacts available." << std::endl;
        return;
    }

    std::cout << "|" << std::setw(10) << "Index" 
              << "|" << std::setw(10) << "First Name"
              << "|" << std::setw(10) << "Last Name"
              << "|" << std::setw(10) << "Nickname" << "|" << std::endl;
    
    for (int i = 0; i < count; i++) {
        printContact(contacts[i], i);
    }

    int index;
    std::cout << "Enter index of contact to view: ";
    std::cin >> index;
    std::cin.ignore();  // Ignore newline left in buffer

    if (index < 0 || index >= count) {
        std::cout << "Invalid index." << std::endl;
        return;
    }

    const Contact& contact = contacts[index];
    std::cout << "First Name: " << contact.getFirstName() << std::endl;
    std::cout << "Last Name: " << contact.getLastName() << std::endl;
    std::cout << "Nickname: " << contact.getNickname() << std::endl;
    std::cout << "Phone Number: " << contact.getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << contact.getDarkestSecret() << std::endl;
}
