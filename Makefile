##
## EPITECH PROJECT, 2020
## makefile BSQ
## File description:
## makefile
##

SRC =	src/main.c	\
		src/map/file_pathe.c	\
		src/map/filling_tab.c	\
		src/map/filling_map.c	\
		src/map/my_refresh_map.c	\
		src/map_ncurse.c	\
		src/move/my_down.c	\
		src/move/my_right.c	\
		src/move/my_left.c	\
		src/move/my_up.c	\
		src/move/checking_second_map.c	\
		src/checking/check_win.c	\
		src/checking/check_loose.c	\
		src/switch.c

OBJ	=	$(SRC:.c=.o)

INCLUDE = -I ./include/

LDFLAGS = -L ./lib/ -lmy -lncurses

CFLAGS = -Wall -Wextra $(INCLUDE)

NAME	= my_sokoban

all:	$(NAME)

$(NAME): $(OBJ)
	make -C lib/
	rm -f $(OBJ)
	gcc -o $(NAME) $(SRC) $(LDFLAGS) $(CFLAGS)

clean:
	make fclean -C lib
	rm -f $(OBJ)
fclean:	clean
	rm -f $(NAME)
	make clean -C lib
re:	fclean all

debug: CFLAGS += -g
debug: re
