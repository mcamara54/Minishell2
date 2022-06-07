##
## EPITECH PROJECT, 2021
## header
## File description:
## header
##

SRC	=	$(shell find src -name "*.c")

OBJ	=	$(SRC:.c=.o)

NAME	=	mysh

LIB	=	my

LIBDIR	=	./lib

INCLUDE	=	./includes

BUILDDIR	=	.

CFLAGS 	=	-Wall -Wextra -g

all:	$(NAME) lib_build

lib_build:
	make -C lib

$(NAME):	$(OBJ) lib_build
	gcc $(OBJ) $(CFLAGS) -L $(LIBDIR) -l $(LIB) \
	-I $(INCLUDE) -o $(NAME) -lncurses

clean:
	make clean -C ./lib
	rm -f $(OBJ)

fclean: clean
	make fclean -C ./lib
	rm -f $(NAME)

re:	fclean all
	make re -C ./lib
