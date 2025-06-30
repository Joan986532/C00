NAME = phonebook

SOURCES = main.cpp \
		Phonebook.cpp

OBJETS = $(SOURCES:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

#--------------------------------------#

all: $(NAME)

$(NAME): $(OBJECTS)
	g++ $(OBJECTS) $(FLAGS) -o $(NAME)
