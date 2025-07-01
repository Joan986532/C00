#include <iostream>
#include <string>

int	main(int argc, char **argv) {
	
	std::string mystr;
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	for(int i = 1; i < argc; i++) {
		mystr += argv[i];
	}
	for(size_t i = 0; i<mystr.length(); i++)
		mystr[i] = std::toupper(mystr[i]);
	std::cout << mystr << std::endl;
	return 0;
}
