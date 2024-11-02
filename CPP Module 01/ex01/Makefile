# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akheired <akheired@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/02 09:58:55 by akheired          #+#    #+#              #
#    Updated: 2024/11/02 09:58:56 by akheired         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= main.cpp Zombie.cpp zombieHorde.cpp

OBJS		= $(SRCS:.cpp=.o)

CPP			= c++

RM			= rm -f

CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

NAME =          Horde

all:            $(NAME)

$(NAME): $(OBJS)
		$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re