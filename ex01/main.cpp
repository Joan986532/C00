#include "Phonebook.hpp"

void	add_contact(Phonebook *phonebook)
{
	Contact		contact;
	int			index;
	std::string word;

	while (contact.firstname.empty()) {
		std::cout << "First Name: "; getline(std::cin, contact.firstname); 
		if (std::cin.eof())
			return ; }
	while (contact.lastname.empty()){
		std::cout << "Last Name: "; getline(std::cin, contact.lastname);
		if (std::cin.eof())
			return ; }
	while (contact.nickname.empty()) {
		std::cout << "Nickname: "; getline(std::cin, contact.nickname);
		if (std::cin.eof())
			return ; }
	while (contact.phonenumber.empty()) {
		std::cout << "Phone Number: "; getline(std::cin, contact.phonenumber);
		if (std::cin.eof())
			return ; }
	while (contact.darksecret.empty()) {
		std::cout << "Darkest secret: "; getline(std::cin, contact.darksecret);
		if (std::cin.eof())
			return ; }
	index = contact.nb_inst;
	while (index > 7)
		index -= 8;
	phonebook->Repertory[index] = contact;
}

void	search_contact(Contact *Repertory)
{
	std::string	contact;
	std::string	tmp;
	int			index;

	for(int	i = 0; i < 8; i++) {
		std::cout << std::setw(10) << i << "|" << std::setw(10);
		tmp = Repertory[i].firstname;
		if (tmp.length() > 10) {
			tmp.resize(9);
			tmp.resize(10, '.');
		}
		std::cout << tmp << "|" << std::setw(10);
		tmp = Repertory[i].lastname;
		if (tmp.length() > 10) {
			tmp.resize(9);
			tmp.resize(10, '.');
		}
		std::cout << tmp << "|" << std::setw(10);
		tmp = Repertory[i].nickname;
		if (tmp.length() > 10) {
			tmp.resize(9);
			tmp.resize(10, '.');
		}
		std::cout << tmp << "|" << std::endl;
	}
	std::cout << std::endl << "choose index 0.1.2.3.4.5.6.7" << std::endl;
	std::cout << ": "; getline(std::cin, contact); std::cout << std::endl;
	if (contact.length() < 2 && contact >= "0" && contact < "8") {
		index = stoi(contact);
		std::cout << "First name:     " << Repertory[index].firstname << std::endl;
		std::cout << "Last name:      " << Repertory[index].lastname << std::endl;
		std::cout << "Nick name:      " << Repertory[index].nickname << std::endl;
		std::cout << "Phone number:   " << Repertory[index].phonenumber << std::endl;
		std::cout << "Darkest secret: " << Repertory[index].darksecret << std::endl;
	}
	else
		std::cout << "Error: wrong format - Back to menu" << std::endl;
	std::cout << std::endl;
}

int	main(int argc, char **argv)
{
	Phonebook	repertory;
	std::string	command;

	while (std::cout << "> " && getline(std::cin, command))
	{
		if (command == "ADD")
		{
			std::cout << std::endl;
			add_contact(&repertory);
		}
		else if (command == "SEARCH")
		{
			std::cout << std::endl;
			search_contact(repertory.Repertory);
		}
		else if (command == "EXIT")
			break ;
		if (std::cin.eof())
			break ;
	}
	return (0);
}
