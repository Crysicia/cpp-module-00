#include "contact.hpp"

const std::string& Contact::getFirstName()
{
	return firstName;
}

const std::string& Contact::getLastName()
{
	return lastName;
}

const std::string& Contact::getNickame()
{
	return nickname;
}

const std::string& Contact::getPhoneNumber()
{
	return phoneNumber;
}

const std::string& Contact::getDarkestSecret()
{
	return darkestSecret;
}

void Contact::setFirstName(const std::string& input)
{
	firstName = input;
}
void Contact::setLastName(const std::string& input)
{
	lastName = input;
}
void Contact::setNickame(const std::string& input)
{
	nickname = input;
}
void Contact::setPhoneNumber(const std::string& input)
{
	phoneNumber = input;
}
void Contact::setDarkestSecret(const std::string& input)
{
	darkestSecret = input;
}
