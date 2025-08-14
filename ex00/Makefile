NAME = megaphone

SOURCES = megaphone.cpp

OBJECTS = $(SOURCES:.cpp=.o)

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

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

.PHONY: all clean fclean re

