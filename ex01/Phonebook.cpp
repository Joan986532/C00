#include "Phonebook.hpp"

Phonebook::Phonebook(void) {
	return;
}

Phonebook::~Phonebook(void) {
	return;
}

Contact::Contact(void) {

	Contact::nb_inst += 1;
	return;
}

Contact::~Contact(void) {
	return;
}

int	Contact::nb_inst = -1;
