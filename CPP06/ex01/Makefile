# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lebojo <lebojo@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/03 17:42:10 by lebojo            #+#    #+#              #
#    Updated: 2024/02/28 16:25:41 by lebojo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	serial

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCDIR	=	./
SRC_FILE= 	main.cpp \
			Serializer.cpp

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
