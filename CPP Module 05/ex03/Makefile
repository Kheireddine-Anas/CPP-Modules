# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akheired <akheired@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/14 09:30:22 by akheired          #+#    #+#              #
#    Updated: 2025/01/14 14:06:26 by akheired         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS		= main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

OBJS		= $(SRCS:.cpp=.o)

CPP			= c++

RM			= rm -f

CPPFLAGS	= -Wall -Wextra -Werror -std=c++98
CPPFLAGS	= -std=c++98

NAME		= Intern

all:$(NAME)

$(NAME): $(OBJS)
		$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re