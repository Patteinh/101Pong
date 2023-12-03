##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC     =	src/101pong.c	\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-I./include -g03 -Wall -Wextra -lm

NAME	=	101pong

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc $(CFLAGS) -o $(NAME) $(OBJ)
clean:
	rm -f $(OBJ)
	rm -f *.o

fclean:	clean
	rm -f $(NAME)

re: all clean
