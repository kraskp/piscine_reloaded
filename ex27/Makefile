#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkraszew <kkraszew@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/14 17:27:30 by kkraszew          #+#    #+#              #
#    Updated: 2019/10/14 17:27:31 by kkraszew         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ft_display_file
CFLAGS = -Wall -Wextra -Werror
SRC = ft_display_file.c
OBJ = ft_display_file.o
HEADER = ft.h

all: $(NAME)

$(NAME):
	gcc -c $(CFLAGS) $(SRC) -I $(HEADER)
	gcc -o $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re