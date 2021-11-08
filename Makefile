# first test
NAME = ft

CC = gcc
FLAGS = -Wall -Wextra -Werror
RM = rm -rf
LIB = libft.a

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcpy.c \
ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strnstr.c ft_strrchr.c ft_strncmp.c ft_memcmp.c \
ft_tolower.c ft_toupper.c ft_substr.c ft_strjoin.c main.c
		
OBJ = $(SRC:%.c=%.o)
		
all : $(NAME)

$(NAME) : $(SRC) $(OBJ)
	$(CC) -c $(FLAGS) $(SRC)
	ar rcs $(LIB) $(OBJ) 

run : $(NAME)
	$(CC) $(OBJ) -o $(NAME)

clean : $(OBJ)
	$(RM) $(OBJ) $(LIB)

fclean : clean
	$(RM) $(NAME)

re : fclean all run