# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lebojo <lebojo@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/03 17:42:10 by lebojo            #+#    #+#              #
#    Updated: 2023/12/18 19:17:53 by lebojo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= DiamondTrap

CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
SRC		=	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp \
			DiamondTrap.cpp

OBJDIR	= obj
OBJ		= $(addprefix $(OBJDIR)/,$(SRC:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

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
