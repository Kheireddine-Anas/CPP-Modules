# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akheired <akheired@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/01 12:01:09 by akheired          #+#    #+#              #
#    Updated: 2024/11/01 12:01:43 by akheired         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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
