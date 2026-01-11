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

GHC	=	ghc

FLAGS	=	-Wall

GHCFLAGS	=	-O2

GHCI	=	ghci

NAME	=	doop

all:	$(NAME)

$(NAME):	$(SRC)
	$(GHC) $(FLAGS) $(GHCFLAGS) $(MAIN) $(SRC) -o $(NAME)
	mkdir -p object
	mv *.hi *.o src/*.hi src/*.o object/ 2>/dev/null || true

tests:	$(SRC)
	$(GHCI) $(FLAGS) $(SRC)

clean:
	rm -rf object/

fclean:	clean
	rm -f $(NAME)

re:	fclean all
