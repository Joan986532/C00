NAME = phonebook

SOURCES = main.cpp \
		Phonebook.cpp

OBJECTS = $(SOURCES:.cpp=.o)

FLAGS = -g -Wall -Wextra -Werror -std=c++98

#--------------------------------------#

all: $(NAME)

$(NAME): $(OBJECTS)
	c++ $(OBJECTS) $(FLAGS) -o $(NAME)

fclean: clean
	rm -f $(NAME)

clean:
	rm $(OBJECTS)

re: fclean all

.PHONY: clean fclean all
