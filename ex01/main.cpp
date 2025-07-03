#include "Phonebook.hpp"

void	add_contact(Phonebook *phonebook)
{
	Contact		contact;
	int			place;
	std::string word;

	std::cout << "nb_inst: " << contact.nb_inst << std::endl;
	while (contact.firstname.empty()) {
		std::cout << "First Name: "; getline(std::cin, contact.firstname);
	}
	while (contact.lastname.empty()) {
		std::cout << "Last Name: "; getline(std::cin, contact.lastname);
	}
	while (contact.nickname.empty()) {
		std::cout << "Nickname: "; getline(std::cin, contact.nickname);
	}
	while (contact.phonenumber.empty()) {
		std::cout << "Phone Number: "; getline(std::cin, contact.phonenumber);
	}
	place = contact.nb_inst;
	while (place > 7)
		place -= 8;
	phonebook->Repertory[place] = contact;
}

void	search_contact(Phonebook *phonebook)
{
	for(int	i = 0; i < 8; i++)
	{
		std::cout << "| " << phonebook->Repertory[i].firstname;
		std::cout << " | " << phonebook->Repertory[i].lastname;
		std::cout << " | " << phonebook->Repertory[i].nickname;
		std::cout << " | " << phonebook->Repertory[i].phonenumber;
		std::cout << " |" << std::endl;
	}
}

int	main(int argc, char **argv)
{
	Phonebook	repertory;
	std::string	command;

	while(1)
	{
		std::cout << "> "; getline(std::cin, command);
		if (!command.empty())
		{
			if (command == "ADD")
			{
				add_contact(&repertory);
				std::cout << "ADD" << std::endl;
			}
			else if (command == "SEARCH")
			{
				search_contact(&repertory);
				std::cout << "search" << std::endl;
			}
			else if (command == "EXIT")
				break ;
		}
	}
	return (0);
}
