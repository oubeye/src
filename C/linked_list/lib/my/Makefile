##
## EPITECH PROJECT, 2024
## lib
## File description:
## lib
##

SRC	=	my_put.c	\
		my_strman.c	\
		verif.c	\
		base_linked_list.c	\
		my_len.c	\
		man_linked_list.c	\
		my_strval.c

SRCO	=	./tests/test.c

SRCT	=	./tests/test_mylib.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra -I../../include/

NAMETEST	=	test

NAMEO	=	t

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

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
	rm -f $(OBJ)
	rm -f *.gc*

fclean: clean
	rm -f $(NAME) $(NAMETEST) $(NAMEO)

re:	fclean all
