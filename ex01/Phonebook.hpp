#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <string>

class Contact {

	public:
		std::string	FirstName;
		std::string	LastName;
		std::string NickName;
		std::string PhoneNumber;
		std::string DarkSecret;
		Contact(void);
		~Contact(void);
};

class Phonebook {

	public:
		Phonebook(void);
		~Phonebook(void);
	private:
		Contact	Repertory[8];
};

#endif
