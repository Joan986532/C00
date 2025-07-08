NAME = Account

SOURCES = Account.cpp \
		  tests.cpp

OBJECTS = $(SOURCES:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

#--------------------------------------#

all: $(NAME)

$(NAME): $(OBJECTS)
	g++ $(OBJECTS) $(CFLAGS) -o $(NAME)

fclean: clean
	rm -f $(NAME)

clean:
	rm $(OBJECTS)

.PHONY: clean fclean all
