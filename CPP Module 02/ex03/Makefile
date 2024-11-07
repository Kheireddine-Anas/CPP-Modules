
SRCS =	main.cpp Fixed.cpp

OBJS			= $(SRCS:.cpp=.o)

CPP			= c++
RM			= rm -f
CPPFLAGS	=  -Wall -Wextra -Werror -std=c++98

NAME		= Fixed

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CPP) ${CFLAGS} -o ${NAME} ${OBJS}

clean:
		$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re
