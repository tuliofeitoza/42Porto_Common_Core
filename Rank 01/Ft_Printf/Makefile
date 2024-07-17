# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsilva-f <tsilva-f@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/09 20:48:47 by tsilva-f          #+#    #+#              #
#    Updated: 2024/05/30 00:21:48 by tsilva-f         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc 
CFLAGS = -Wall -Wextra -Werror -g 

SCR = ft_printf.c ft_puthex.c ft_putnbr_unsigned.c ft_putnbr.c ft_putstr.c ft_putchar.c ft_putpoint.c  
OBJS = $(SCR:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all