##
## Makefile for matchstick in /home/jeremy.elkaim/matchstick
## 
## Made by jeremy elkaim
## Login   <jeremy.elkaim@epitech.net>
## 
## Started on  Wed Feb 15 14:47:52 2017 jeremy elkaim
## Last update Mon Feb 20 16:18:08 2017 jeremy elkaim
##

NAME    = matchstick

SRC    = matchstick.c	\
	 match.c	\

OBJ    = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		gcc $(OBJ) -o $(NAME)

clean:
		rm -rf $(OBJ)

fclean:			clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:			all clean fclean re
