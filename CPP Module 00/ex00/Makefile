# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akheired <akheired@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/25 08:11:09 by akheired          #+#    #+#              #
#    Updated: 2024/10/25 08:11:10 by akheired         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	megaphone.cpp

OBJS			= $(SRCS:.cpp=.o)

CPP			= c++
RM			= rm -f
CPPFLAGS	=  -Wall -Wextra -Werror -std=c++98

NAME		= megaphone

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CPP) ${CFLAGS} -o ${NAME} ${OBJS}

clean:
		$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re