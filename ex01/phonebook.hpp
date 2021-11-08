#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "contact.hpp"
#include <iostream>
#include <string>

class Phonebook
{
public:
    Phonebook();
	void addMenu();
	void searchMenu();

private:
	void addContact(Contact& contact);
	void displayContactTable(size_t index);
	void searchContacts();
    std::string getInput(std::string display);
    std::string truncate(std::string string);
    bool validIndex(std::string string);

	size_t currentIndex;
    size_t numberOfContacts;
	Contact contacts[8];
};

#endif
