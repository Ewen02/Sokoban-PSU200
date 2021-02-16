##
## EPITECH PROJECT, 2020
## makefile BSQ
## File description:
## makefile
##

SRC =	src/main.c	\
		src/map/file_pathe.c	\
		src/map/filling_tab.c

OBJ	=	$(SRC:.c=.o)

NAME	= my_sokoban

all:	$(NAME)

$(NAME): $(OBJ)
	make -C lib/
	rm -f $(OBJ)
	gcc -g -o $(NAME) $(SRC) -L lib/ -lmy -lncurses

clean:
	make fclean -C lib
	rm -f $(OBJ)
fclean:	clean
	rm -f $(NAME)
	make clean -C lib
re:	fclean all

debug: CFLAGS += -g
debug: re
