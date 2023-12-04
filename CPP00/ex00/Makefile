# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lebojo <lebojo@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/03 17:42:10 by lebojo            #+#    #+#              #
#    Updated: 2023/12/03 18:03:42 by lebojo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone
CC		= g++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
SRC		= megaphone.cpp
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
CFLAGS	= -Wall -Wextra -Werror -std=c++98
SRC		= megaphone.cpp
