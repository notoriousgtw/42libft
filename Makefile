# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gwood <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/20 15:11:46 by gwood             #+#    #+#              #
#    Updated: 2018/02/20 15:21:03 by gwood            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FUNCTS = ft_putchar

RM = /bin/rm -f

CFILES = $(patsubst %, %.c, $(FUNCTS))
OBJECTS = $(patsubst %, %.o, $(FUNCTS))


OPTIONS = -I includes
FLAGS = -Wall -Wextra -Werror

.PHONY = clean fclean re

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
