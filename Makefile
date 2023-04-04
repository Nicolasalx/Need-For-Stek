##
## EPITECH PROJECT, 2022
## AIA
## File description:
## Makefile
##

CC	=	gcc

SRC	=	src/main.c	\
		src/main_loop.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	ai

CFLAGS	=	-Wall -Wextra

CPPFLAGS	=	-I ./include -I ./src

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ)
	mv $(NAME) ../n4s_package

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM)  $(NAME)

re: fclean all

all: $(NAME)

.PHONY: all clean fclean re
