#include "contact.hpp"

const std::string& Contact::getFirstName() const {
    return firstName;
}

const std::string& Contact::getLastName() const {
    return lastName;
}

const std::string& Contact::getNickname() const { return nickname; }
const std::string& Contact::getPhoneNumber() const { return phoneNumber; }
const std::string& Contact::getDarkestSecret() const { return darkestSecret; }

void Contact::setFirstName(const std::string& input) { firstName = input; }
void Contact::setLastName(const std::string& input) { lastName = input; }
void Contact::setNickname(const std::string& input) { nickname = input; }
void Contact::setPhoneNumber(const std::string& input) { phoneNumber = input; }
void Contact::setDarkestSecret(const std::string& input) { darkestSecret = input; }
