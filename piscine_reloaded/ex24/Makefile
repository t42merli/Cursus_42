# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmerli <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 12:31:48 by tmerli            #+#    #+#              #
#    Updated: 2017/11/07 15:39:56 by tmerli           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c \
	  srcs/ft_swap.c

SRCO = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all :
	gcc -c $(SRC)
	ar rc libft.a  $(SRCO)

clean:
	rm -f $(SRCO)

fclean: clean
	rm -f libft.a

re: fclean all
