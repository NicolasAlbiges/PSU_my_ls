##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile for do_op
##

CFLAGS	=	-I./include -W -Wall -Wextra -lcriterion -g3

SRC	=	my_ls_boot.c		\
		get_right.c		\
		info_file.c		\
		error.c		\
		useful_function.c		\
		useful_function_bis.c		\
		whitout_func.c		\
		l_flag.c		\

OBJ	=	$(SRC:.c=.o)

NAME	=	my_ls

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C ./lib/my
	gcc -o $(NAME) $(OBJ) -L./lib/my -lmy
clean:
	rm -f $(OBJ)
	make clean -C ./lib/my

fclean:	clean
	rm -f $(NAME)
	make fclean -C ./lib/my

re:	fclean all
