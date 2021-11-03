#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "contact.hpp"

class Phonebook
{
public:
	Phonebook() {
		currentIndex = 0;
	};
	void addMenu();
	void searchMenu();

private:
	void addContact(Contact& contact);
	void displayContacts();
	void searchContacts(size_t index);

	size_t currentIndex;
	Contact contacts[8];
}

#endif