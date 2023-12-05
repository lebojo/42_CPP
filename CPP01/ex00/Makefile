# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lebojo <lebojo@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/03 17:42:10 by lebojo            #+#    #+#              #
#    Updated: 2023/12/05 23:12:48 by lebojo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= zombie

CC		= g++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
SRC		= Zombie.cpp newZombie.cpp randomChump.cpp main.cpp

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
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
