##
## EPITECH PROJECT, 2024
## lib
## File description:
## lib
##

SRC	=

SRCO	=	./tests/test.c

SRCT	=	./tests/test_mylib.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra -lncurses -L./lib/my -lmy -I./include

NAMETEST	=	test

NAMEO	=	t

NAME	=	

all:	$(NAME)

$(NAME):	$(OBJ)
	cd lib/my && make
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

test_run:	fclean $(NAMETEST)
			make fclean

$(NAMETEST):	$(NAME)
	gcc -o $(NAMETEST) $(SRC) $(SRCT) $(CFLAGS) -lcriterion --coverage -L. -lmy
	./$(NAMETEST) --verbose
	make fclean

o:	$(NAMEO)

$(NAMEO):	$(NAME)
	gcc -o $(NAMEO) $(SRCO) $(CFLAGS) -L. -lmy
	./$(NAMEO)
	make fclean

clean:
	cd lib/my && make clean
	rm -f $(OBJ)
	rm -f *.gc*

fclean: clean
	cd lib/my && make fclean
	rm -f $(NAME) $(NAMETEST) $(NAMEO)

sclean:	fclean
	find -iname "*~" -delete -or -iname "#*#" -delete
	clear

re:	fclean all

cods:	sclean
	coding-style . .
	cat coding-style-reports.log

push:	cods
	git status

srch:
	@echo "what do you need to search ? :"
	@read TO_FIND; \
	grep $$TO_FIND $(SRC) lib/my/*.c include/*

task:
	grep "TO DO:" $(SRC) lib/my/*.c include/*
