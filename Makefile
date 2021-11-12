# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iharile <iharile@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/08 12:57:38 by iharile           #+#    #+#              #
#    Updated: 2021/11/12 13:57:38 by iharile          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft

CC = gcc
FLAGS = -Wall -Wextra -Werror
RM = rm -rf
LIB = libft.a


SRC = *.c
		
OBJ = $(SRC:%.c=%.o)
		
all : $(NAME)

$(NAME) :
	$(CC) -c $(FLAGS) $(SRC)
	ar rcs $(LIB) $(OBJ) 

run :
	$(CC) $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJ) $(LIB)

fclean : clean
	$(RM) $(NAME)

re : fclean all run