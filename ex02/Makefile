NAME = Account

SOURCES = Account.cpp \
		  tests.cpp

OBJECTS = $(SOURCES:.cpp=.o)

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

CXX = c++

#--------------------------------------#

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CXX) $(OBJECTS) $(CFLAGS) -o $(NAME)

fclean: clean
	rm -f $(NAME)

clean:
	rm $(OBJECTS)

.PHONY: clean fclean all
