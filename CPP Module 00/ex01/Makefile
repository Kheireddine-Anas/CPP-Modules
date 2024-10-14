SRCS =		main.cpp Contact.cpp PhoneBook.cpp

OBJS =		$(SRCS:.cpp=.o)

CPP =		c++
RM =		rm -f
CPPFLAGS =	-Wall -Wextra -Werror -std=c++98

NAME =		phonebook

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
