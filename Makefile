# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgarczyn <lgarczyn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/22 17:11:22 by lgarczyn          #+#    #+#              #
#    Updated: 2015/01/22 17:13:56 by lgarczyn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
TNAME = test.out

SRC =	printf.c \
		display.c \
		display_text.c \
		display_int.c \

TEST = main.o

INC = libft/includes
		
OBJ = $(SRC:.c=.o)

LIB = -L libft/ -lft

DEB = 

OPT = -Ofast

FLG = -Wall -Wextra $(OPT) $(DEB)

all: $(NAME)

libft:

$(NAME):$(OBJ) $(TEST)
	cd libft && make
	ar rcs $(NAME) $(OBJ) libft/*.o
	gcc $(FLG) $(TEST) $(LIB) -L . -lftprintf -o $(TNAME)
	
%.o: %.c
	gcc -I$(INC) $(FLG) -c $< $

clean:
	rm -rf $(OBJ)
	rm -rf $(TEST)
	cd libft && make clean

fclean: clean
	rm -rf $(NAME)
	rm -rf $(TNAME)
	cd libft && make fclean

re: fclean all

optire: fclean opti