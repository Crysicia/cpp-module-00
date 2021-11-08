#include "phonebook.hpp"

Phonebook::Phonebook() : currentIndex(0), numberOfContacts(0) {}

void Phonebook::addMenu() {
    contacts[currentIndex].setFirstName(Phonebook::getInput("First name: "));
    contacts[currentIndex].setLastName(Phonebook::getInput("Last name: "));
    contacts[currentIndex].setNickname(Phonebook::getInput("Nickname: "));
    contacts[currentIndex].setPhoneNumber(Phonebook::getInput("Phone number: "));
    contacts[currentIndex].setDarkestSecret(Phonebook::getInput("Darkest secret: "));
    
    currentIndex = (currentIndex + 1) % 8;
    if (numberOfContacts < 8)
        numberOfContacts++;
    Phonebook::searchMenu();
}

void Phonebook::searchMenu() {
    std::cout << "Index     |First name|Last name |Nickname  " << std::endl
              << "----------|----------|----------|----------" << std::endl;
    for (size_t i = 0; i < numberOfContacts; i++) {
        Phonebook::displayContact(i);
    }
}
//
//
//void Phonebook::addContact(Contact& contact) {
//    contacts[currentIndex] = contact;
//}
//
void Phonebook::displayContact(size_t index) {
    std::cout << index << std::string(9, ' ') << "|"
              << Phonebook::truncate(contacts[index].getFirstName()) << "|"
              << Phonebook::truncate(contacts[index].getLastName()) << "|"
              << Phonebook::truncate(contacts[index].getNickname()) << std::endl;
}

std::string Phonebook::truncate(std::string string) {
    int length = string.length();
    if (length > 10)
        return string.substr(0, 9) + ".";
    return string + std::string(10 - length, ' ');
}
//
//void Phonebook::searchContacts(size_t index) {
//
//}

std::string Phonebook::getInput(std::string display) {
    std::string input;
    
    std::cout << display;
    std::getline(std::cin, input);
    return input;
}
