# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jchapell <jchapell@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/03 17:42:10 by lebojo            #+#    #+#              #
#    Updated: 2024/03/26 12:19:41 by jchapell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	bureaucrat

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCDIR	=	src/
SRC_FILE= 	main.cpp \
			Bureaucrat.cpp \
			AForm.cpp \
			ShrubberyCreationForm.cpp \
			RobotomyRequestForm.cpp \
			PresidentialPardonForm.cpp

SRC		=	$(SRC_FILE:%=$(SRCDIR)%)

OBJDIR	= obj
OBJ		= $(SRC:$(SRCDIR)%.c=$(OBJDIR)%.o)

INC		= -I./inc/

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(INC) $(OBJ) -o $(NAME)

$(OBJDIR)/%.o: %.cpp | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
