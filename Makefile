# first test
NAME = ft 

CC = gcc
FLAGS = -Wall -Wextra -Werror
RM = rm -rf

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcpy.c \
ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strnstr.c ft_strrchr.c ft_strncmp.c ft_memcmp.c \
ft_tolower.c ft_toupper.c main.c
		
OBJ = ft_atoi.o ft_bzero.o ft_calloc.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_memchr.o ft_memcpy.o \
ft_memmove.o ft_memset.o ft_strchr.o ft_strdup.o ft_strlcat.o ft_strlcpy.o ft_strlen.o ft_strnstr.o ft_strrchr.o ft_strncmp.o ft_memcmp.o \
ft_tolower.o ft_toupper.o main.o
		
all : $(NAME)

$(NAME) : $(SRC) $(OBJ)
	$(CC) -c $(FLAGS) $(SRC)
	ar rcs libft.a $(OBJ) 

run : $(NAME)
	$(CC) $(OBJ) -o $(NAME)

clean : $(OBJ)
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all run