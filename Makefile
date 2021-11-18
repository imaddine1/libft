# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iharile <iharile@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/08 12:57:38 by iharile           #+#    #+#              #
#    Updated: 2021/11/18 17:32:01 by iharile          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft

CC = gcc
FLAGS = -Wall -Wextra -Werror
RM = rm -rf
LIB = libft.a


SRC = *.c
bonus = *_bonus.c

OBJ = $(SRC:%.c=%.o)
OBJ_BONUS = $(bonus:%.c=%.o)

all : $(NAME)

$(NAME) :
	$(CC) -c $(FLAGS) $(SRC)
	ar rcs $(LIB) $(OBJ) 

run :
	$(CC) $(OBJ) -o $(NAME)

bonus:
	$(CC) -c $(FLAGS) $(bonus)
	ar rcs $(LIB) $(OBJ)

clean :
	$(RM) $(OBJ)  $(LIB)

fclean : clean
	$(RM) $(NAME)

re : fclean all bonus run