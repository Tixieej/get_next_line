# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rde-vrie <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2019/12/03 16:24:48 by rde-vrie      #+#    #+#                  #
#    Updated: 2020/02/03 14:52:59 by rde-vrie      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = gnl_test
SRC = get_next_line.c get_next_line_utils.c main.c 
BONUS =
FLAGS = -Wall -Werror -Wextra
SIZE = 32

all:
	gcc $(FLAGS) -D BUFFER_SIZE=$(SIZE) $(SRC) -o $(NAME)
	./$(NAME)

bonus:
	gcc $(FLAGS) -D BUFFER_SIZE=$(SIZE) $(BONUS) -o $(NAME)
	./$(NAME)
