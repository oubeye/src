##
## EPITECH PROJECT, 2024
## lib
## File description:
## lib
##

SRC	=	my_put.c	\
		my_strman.c	\
		verif.c	\
		my_len.c	\
		my_strval.c	\
		my_adstrman.c	\
		my_advencelen.c	\
		file_size.c	\
		my_convert.c

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
