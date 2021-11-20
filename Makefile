# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iharile <iharile@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/08 12:57:38 by iharile           #+#    #+#              #
#    Updated: 2021/11/20 10:46:57 by iharile          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
LIB = libft.a


SRC = ft_isdigit.c ft_memset.c ft_strjoin.c ft_strtrim.c ft_isprint.c \
ft_putchar_fd.c ft_strlcat.c ft_substr.c ft_atoi.c ft_itoa.c ft_putendl_fd.c \
ft_strlcpy.c ft_tolower.c ft_bzero.c ft_putnbr_fd.c ft_strlen.c ft_striteri.c\
ft_toupper.c ft_calloc.c ft_memchr.c ft_putstr_fd.c  ft_strmapi.c \
ft_isalnum.c ft_memcmp.c ft_split.c ft_strncmp.c ft_isalpha.c ft_memcpy.c \
ft_strchr.c ft_strnstr.c ft_isascii.c ft_memmove.c  ft_strrchr.c \
ft_strdup.c main.c

SRC_BONUS = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c \
	ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c 

OBJ = $(SRC:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)
		
all : $(NAME) 

$(NAME) : $(OBJ)
		 ar rcs $(LIB) $(OBJ)
run : 
	$(CC) $(OBJ) $(OBJ_BONUS) -o $(NAME)

bonus : $(OBJ_BONUS)
	ar rcs $(LIB) $(OBJ_BONUS)

clean :
	$(RM) $(OBJ) $(OBJ_BONUS) $(LIB)

fclean : clean
	$(RM) $(NAME)

re : fclean all bonus run