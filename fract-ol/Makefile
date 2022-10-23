# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/06 19:38:04 by myuriko           #+#    #+#              #
#    Updated: 2022/09/08 20:53:17 by myuriko          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = srcs
FILES = srcs/additional_funcs.c srcs/burningship.c srcs/fractol.c srcs/julia.c srcs/mandelbrot.c
CFLAGS = -Werror -Wextra -Wall

OBJECTS = $(FILES:.c=.o)
NAME = fractol
HEADER = include
CC = gcc
RM = rm -f
UNAME = $(shell uname -s)
XFLAGS = -I /usr/local/include -Imlx -framework OpenGL -framework AppKit


all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $^ -o $@ $(XFLAGS)

$(SRC)/%.o: $(SRC)/%.c $(HEADER)/fractol.h
	$(CC) $(CFLAGS) -I$(HEADER) -c $< -o $@ 

bonus: all

startall:
	$(shell ./fractol Mandelbrot & ./fractol Julia & ./fractol "Burning ship")

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re, startall, bonus
