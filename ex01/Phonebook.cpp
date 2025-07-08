#include "Phonebook.hpp"

Phonebook::Phonebook(void): nb_inst(0) {}

void Contact::setInfo(Info info) {
	this->info = info;
}

std::string	Contact::resizeFirstname() {
	return (resizeName(info.firstname));
}

std::string	Contact::resizeLastname() {
	return (resizeName(info.lastname));
}

std::string	Contact::resizeNickname() {
	return (resizeName(info.nickname));
}

std::string Phonebook::fillInfo(std::string name) {
	
	std::string str;

	while (str.empty()) {
		std::cout << name << ": "; getline(std::cin, str); 
		if (std::cin.eof())
			return ("");
	}
	return (str);
}

void	Contact::display() {
	std::cout << "First name:     " << info.firstname << std::endl;
	std::cout << "Last name:      " << info.lastname << std::endl;
	std::cout << "Nick name:      " << info.nickname << std::endl;
	std::cout << "Phone number:   " << info.phonenumber << std::endl;
	std::cout << "Darkest secret: " << info.darksecret << std::endl;
}

std::string	Contact::resizeName(std::string name) {

	std::string tmp;

	tmp = name;
	if (tmp.length() > 10) {
		tmp.resize(9);
		tmp.resize(10, '.');
	}
	return (tmp);
}

void	Phonebook::add_contact()
{
	Contact		contact;
	int			index;
	Info	info;

	info.firstname = fillInfo("First Name");
	if (info.firstname == "")
		return ;
	info.lastname = fillInfo("Last Name");
	if (info.lastname == "")
		return ;
	info.nickname = fillInfo("Nick Name");
	if (info.nickname == "")
		return ;
	info.phonenumber = fillInfo("Phone number");
	if (info.phonenumber == "")
		return ;
	info.darksecret = fillInfo("Darkest secret");
	if (info.darksecret == "")
		return ;
	contact.setInfo(info);
	index = nb_inst % 8;
	repertory[index] = contact;
	++nb_inst;
}

void	Phonebook::search_contact()
{
	std::string	contact;
	std::string	tmp;
	int			index;

	for(int	i = 0; i < 8; i++) {
		std::cout << std::setw(10) << i << "|" << std::setw(10);
		tmp = repertory[i].resizeFirstname();
		std::cout << tmp << "|" << std::setw(10);
		tmp = repertory[i].resizeLastname();
		std::cout << tmp << "|" << std::setw(10);
		tmp = repertory[i].resizeNickname();
		std::cout << tmp << "|" << std::endl;
	}
	std::cout << std::endl << "choose index 0.1.2.3.4.5.6.7" << std::endl;
	std::cout << ": "; getline(std::cin, contact); std::cout << std::endl;
	if (contact.length() < 2 && contact >= "0" && contact < "8") {
		index = stoi(contact);
		repertory[index].display();
	}
	else
		std::cout << "Error: wrong format - Back to menu" << std::endl;
	std::cout << std::endl;
}
