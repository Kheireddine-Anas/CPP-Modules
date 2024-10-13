#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
public:
    PhoneBook();
    void addContact();
    void searchContact() const;

private:
    Contact contacts[8];
    int index;
    int count;

    void printContact(const Contact &contact, int index) const;
};

#endif
