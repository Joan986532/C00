#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <string>
# include <iostream>
# include <iomanip>

struct Info {

	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string phonenumber;
	std::string darksecret;
};

class Contact {
	public:
		void setInfo(Info info);
		std::string	resizeFirstname();
		std::string	resizeLastname();
		std::string	resizeNickname();
		void	display(void);

	private:
		std::string	resizeName(std::string);
		Info info;
};

class Phonebook {
	public:
		Phonebook(void);
		void	search_contact();
		void	add_contact();

	private:
		int		nb_inst;
		Contact	repertory[8];
		std::string	fillInfo(std::string);
};

#endif
