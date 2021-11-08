#include <iostream>
#include <string>
#include "contact.hpp"
#include "phonebook.hpp"

int main()
{
	std::string input;
    Phonebook phonebook;
    
	std::cout << "|===============|" << std::endl
			  << "| Phonebook3000 |" << std::endl
			  << "|===============|" << std::endl;
	while (true) {
		std::cout << "ADD, SEARCH, EXIT" << std::endl;
        std::getline(std::cin, input);

		if (std::cin.eof())
		{
			std::cout << "Please don't break my input" << std::endl;
			return 1;
		}
		if (!input.compare("ADD"))
            phonebook.addMenu();
		else if (!input.compare("SEARCH"))
            phonebook.searchMenu();
		else if (!input.compare("EXIT"))
			return 0;
	}
	return 0;
}
