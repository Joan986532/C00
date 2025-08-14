NAME = phonebook

SOURCES = main.cpp \
		Phonebook.cpp

OBJECTS = $(SOURCES:.cpp=.o)

CXXFLAGS = -g -Wall -Wextra -Werror -std=c++98

CXX = c++

#--------------------------------------#

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CXX) $(OBJECTS) $(FLAGS) -o $(NAME)

fclean: clean
	rm -f $(NAME)

clean:
	rm $(OBJECTS)

re: fclean all

.PHONY: clean fclean all
