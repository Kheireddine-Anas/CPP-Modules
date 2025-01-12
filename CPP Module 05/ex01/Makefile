# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akheired <akheired@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/12 09:51:03 by akheired          #+#    #+#              #
#    Updated: 2025/01/12 09:58:32 by akheired         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



SRCS		= main.cpp Bureaucrat.cpp Form.cpp

OBJS		= $(SRCS:.cpp=.o)

CPP			= c++

RM			= rm -f

CPPFLAGS	= -Wall -Wextra -Werror -std=c++98
CPPFLAGS	= -std=c++98

NAME		= Form

all:$(NAME)

$(NAME): $(OBJS) Bureaucrat.hpp
		$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re