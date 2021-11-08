#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "contact.hpp"
#include <iostream>

class Phonebook
{
public:
    Phonebook();
	void addMenu();
	void searchMenu();

private:
	void addContact(Contact& contact);
	void displayContact(size_t index);
	void searchContacts(size_t index);
    std::string getInput(std::string display);
    std::string truncate(std::string string);

	size_t currentIndex;
    size_t numberOfContacts;
	Contact contacts[8];
};

#endif
