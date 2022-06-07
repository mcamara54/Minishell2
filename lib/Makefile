##
## EPITECH PROJECT, 2021
## makefile
## File description:
## file1
##

NAME    =       libmy.a

SRC	=	atoi.c\
	puts.c\
	isnum.c\
	putnbr.c\
	strcat.c\
	strcmp.c\
	nstrcmp.c\
	strcpy.c\
	strlen.c\
	word_array.c\
	putchar.c\
	spaces.c\

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)	$(OBJ)

re:	fclean all
