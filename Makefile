# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gwood <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/20 15:11:46 by gwood             #+#    #+#              #
#    Updated: 2018/02/21 15:05:56 by gwood            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FUNCTS = ft_memset ft_bzero ft_memcpy ft_memccpy ft_memmove ft_memchr \
		 ft_memcmp ft_strlen ft_strdup ft_strcpy ft_strncpy ft_strcat \
		 ft_strncat ft_strlcat\
		 ft_toupper ft_tolower ft_memalloc ft_strnew ft_putchar ft_putstr

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
