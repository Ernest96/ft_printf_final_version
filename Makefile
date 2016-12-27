# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dprovorn <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/09 13:52:42 by dprovorn          #+#    #+#              #
#    Updated: 2016/11/09 13:53:28 by dprovorn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = ft*.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
		@$(CC) $(CFLAGS) -c $? $(SRC)
			@ar rc $(NAME) $? $(OBJ)
				@ranlib $(NAME)

clean:
		@/bin/rm -f $(OBJ)

fclean: clean
		@/bin/rm $(NAME)

re: fclean all

.PHONY: clean

