#include "Phonebook.hpp"

int	main(int argc, char **argv)
{
	Phonebook	repertory;
	std::string	command;

	std::cout << "> ";
	while (getline(std::cin, command))
	{
		if (command == "ADD")
		{
			std::cout << std::endl;
			repertory.add_contact();
		}
		else if (command == "SEARCH")
		{
			std::cout << std::endl;
			repertory.search_contact();
		}
		else if (command == "EXIT")
			break ;
		if (std::cin.eof())
			break ;
		std::cout << "> ";
	}
	return (0);
}
