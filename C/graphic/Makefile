##
## EPITECH PROJECT, 2024
## graphical project
## File description:
## graphical project
##

SRC	=	try_hunter.c	\
		game_play.c

SRCO	=	./tests/test.c

SRCT	=	./tests/test_mylib.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra -I./include -Llib/my -lmy

CGRPHFLAGS	=	-lcsfml-graphics -lcsfml-system -lcsfml-window

NAME	=	my_hunter

all:	$(NAME)

$(NAME):	$(OBJ)
	cd lib/my && make
	gcc -o $(NAME) $(OBJ) $(CFLAGS) $(CGRPHFLAGS)

clean:
	rm -f $(OBJ)
	rm -f *.gc*
	cd lib/my && make clean

fclean: clean
	rm -f $(NAME) $(NAMETEST) $(NAMEO)
	cd lib/my && make fclean

re:	fclean all

cods:	fclean
	find -iname "*~" -delete -or -iname "#*#" -delete
	coding-style . .
	cat coding-style-reports.log
