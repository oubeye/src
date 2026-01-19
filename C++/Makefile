##
## EPITECH PROJECT, 2026
## haskell Makefile
## File description:
## a Makefile for Haskell project
##

SRCFILES	=	DoOp.hs

MAIN	=	Main.hs

SRCDIR	=	src

SRC	=	$(addprefix $(SRCDIR)/, $(SRCFILES))

GPP	=	clang++

FLAGS	=	-std=c++20 -Wall -Wextra -Werror

NAME	=	Z

all:	$(NAME)

$(NAME):	$(SRC)
	$(GPP) $(FLAGS) $(MAIN) $(SRC) -o $(NAME)
	mkdir -p object
	mv *.o src/*.o object/ 2>/dev/null || true

clean:
	rm -rf object/

fclean:	clean
	rm -f $(NAME)

re:	fclean all
