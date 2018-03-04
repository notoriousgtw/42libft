# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gwood <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/20 15:11:46 by gwood             #+#    #+#              #
#    Updated: 2018/03/03 18:26:56 by gwood            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADERS = libft

FUNCTS = ft_memset ft_bzero ft_memcpy ft_memccpy ft_memmove ft_memchr \
		 ft_memcmp ft_strlen ft_strdup ft_strcpy ft_strncpy ft_strcat \
		 ft_strncat ft_strlcat ft_strchr ft_strrchr ft_strstr ft_strnstr \
		 ft_strcmp ft_strncmp ft_atoi ft_isalpha ft_isdigit ft_isalnum \
		 ft_isascii ft_isprint ft_toupper ft_tolower ft_memalloc ft_memdel \
		 ft_strnew ft_strdel ft_strclr ft_striter ft_striteri ft_strmap \
		 ft_strmapi ft_strequ ft_strnequ ft_strsub ft_strjoin ft_strtrim \
		 ft_strsplit ft_itoa ft_putchar ft_putstr ft_putendl ft_putnbr \
		 ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd \
		 ft_lstnew ft_lstdelone ft_lstdel ft_lstadd ft_lstiter ft_lstmap \
		 ft_iswspace ft_strndup

RM = rm -f

HFILES = $(patsubst %, %.h, $(HEADERS))
CFILES = $(patsubst %, %.c, $(FUNCTS))
OBJECTS = $(patsubst %, %.o, $(FUNCTS))
FLAGS = -Wall -Wextra -Werror

.PHONY = clean fclean re

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS) $(CFILES)$(HFILES)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
