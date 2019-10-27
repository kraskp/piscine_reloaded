#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkraszew <kkraszew@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/14 17:01:26 by kkraszew          #+#    #+#              #
#    Updated: 2019/10/14 17:04:06 by kkraszew         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a
PATH_SRC = ./srcs/
PATH_HEADER = ./includes/
SRC = $(PATH_SRC)ft_putchar.c $(PATH_SRC)ft_putstr.c $(PATH_SRC)ft_strcmp.c \
				$(PATH_SRC)ft_strlen.c $(PATH_SRC)ft_swap.c
HEADER = $(PATH_HEADER)ft.h
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC) -I $(HEADER)
	ar rc $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re