# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmerli <tmerli@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/18 16:12:14 by tmerli            #+#    #+#              #
#    Updated: 2018/03/14 12:46:44 by tmerli           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB=libft.a

LIBPATH=../libft/

NAME = fdf

CC = gcc

SRC =	ft_display.c ft_free.c ft_map.c \
		ft_image.c ft_movement.c calc.c \
		fdf.c get_next_line.c \

HEAD = fdf.h get_next_line.h

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(HEAD) $(SRC)
	make -C $(LIBPATH)
	make -C minilibx_macos
	gcc $(FLAGS) -o $(NAME) $(SRC) $(LIBPATH)$(LIB) -Lminilibx_macos -lmlx -framework OpenGL -framework Appkit

clean :
	make clean -C $(LIBPATH)
	make clean -C minilibx_macos

fclean: clean
	rm -f $(NAME)
	rm -f $(LIBPATH)$(LIB)

re : fclean all
