##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## printf
##

SRC	=	sources/my_memset.c		\	
		sources/my_printf_functions.c		\
		sources/my_printf.c		\
		sources/my_put_long.c	\
		sources/my_put_nbr.c	\	
		sources/my_putchar.c	\
		sources/my_strlen.c		\

OBJ	=	$(SRC:.c=.o)

NAME	=	printf

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all