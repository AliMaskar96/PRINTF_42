# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aait-mas <aait-mas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/01 13:54:40 by aait-mas          #+#    #+#              #
#    Updated: 2021/12/04 15:01:26 by aait-mas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_tohex.c ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_printf.c
OBJS = ${SRC:.c=.o}
NAME = libftprintf.a
CC = gcc 
FLAGS = -Wall -Werror -Wextra

all:$(NAME)

$(NAME): $(OBJS)

%.o: %.c 
	$(CC) $(FLAGS) -c $<
	ar rc $(NAME) $@

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f libftprintf.a
re: fclean all