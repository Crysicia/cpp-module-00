#include <iostream>
#include <string>
#include "contact.hpp"


int main()
{
	std::string input;

	Contact test[8];

	test[0].setLastName("Bonjour");
	test[1].setLastName("je");
	test[2].setLastName("suis");
	test[3].setLastName("vivant.");
	std::cout << test[0].getLastName() << std::endl;
	std::cout << test[1].getLastName() << std::endl;
	std::cout << test[2].getLastName() << std::endl;
	std::cout << test[3].getLastName() << std::endl;
	std::cout << "|===============|" << std::endl
			  << "| Phonebook3000 |" << std::endl
			  << "|===============|" << std::endl;
	while (true) {
		std::cout << "ADD, SEARCH, EXIT" << std::endl;
		std::cin >> input;

		if (std::cin.eof())
		{
			std::cout << "Please don't break my input" <<std::endl;
			return 1;
		}
		if (!input.compare("ADD"))
			std::cout << "ADD THINGS" << std::endl;
		else if (!input.compare("SEARCH"))
			std::cout << "SEARCH PEOPLE" << std::endl;
		else if (!input.compare("EXIT"))
			return 0;
	}
	return 0;
}