#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <string>
# include <iostream>
# include <iomanip>

class Contact {

	public:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string phonenumber;
		std::string darksecret;
		static int	nb_inst;
		Contact(void);
		~Contact(void);
};

class Phonebook {

	public:
		Phonebook(void);
		~Phonebook(void);
		Contact	Repertory[8];
};

#endif
