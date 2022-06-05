# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/07 19:25:18 by myuriko           #+#    #+#              #
#    Updated: 2022/01/09 15:03:05 by myuriko          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFT = libft.a

SRC = srcs/ft_printf.c srcs/ft_int_conv.c srcs/ft_str_conv.c\
		srcs/ft_char_conv.c srcs/ft_hexa_conv.c srcs/ft_itohex.c

OBJS = $(SRC:.c=.o)

LIBFTPATH = ./libft/

FLAGS = -Wall -Wextra -Werror

CC = gcc

all: $(NAME)

$(NAME): $(OBJS) $(LIBFTPATH)
	@echo making library...
	@make -C $(LIBFTPATH) $(LIBFT)
	@cp -r $(LIBFTPATH)$(LIBFT) .
	@mv $(LIBFT) $(NAME)
	@ar -rcs $(NAME) $(OBJS)
	@echo done!

.c.o:
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
