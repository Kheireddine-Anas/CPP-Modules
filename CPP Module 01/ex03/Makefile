# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akheired <akheired@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/02 10:09:03 by akheired          #+#    #+#              #
#    Updated: 2024/11/02 10:09:04 by akheired         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJS		= $(SRCS:.cpp=.o)

CPP			= c++

RM			= rm -f

CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

NAME =          Weapons

all:            $(NAME)

$(NAME): $(OBJS)
		$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re