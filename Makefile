# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anahvard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/13 17:00:06 by anahvard          #+#    #+#              #
#    Updated: 2026/02/14 12:08:44 by anahvard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
NAME = libftprint.a
CFLAGS = -Wall -Wextra -Werror

SRCS = print_hex_low.c print_hex_upp.c print_add.c print_char.c print_nbr.c ft_printf.c unsigned_decimal.c handle_format.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

