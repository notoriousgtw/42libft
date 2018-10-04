# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gwood <gwood@42.us.org>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/10/30 14:30:20 by mhurd             #+#    #+#              #
#    Updated: 2018/10/03 15:44:04 by gwood            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
LIBNAME = $(subst .a,,$(NAME))

FUNCTS = ft_memset ft_bzero ft_memcpy ft_memccpy ft_memmove ft_memchr \
		 ft_memcmp ft_strlen ft_strdup ft_strcpy ft_strncpy ft_strcat \
		 ft_strncat ft_strlcat ft_strchr ft_strrchr ft_strstr ft_strnstr \
		 ft_strcmp ft_strncmp ft_atoi ft_isalpha ft_isdigit ft_isalnum \
		 ft_isascii ft_isprint ft_toupper ft_tolower ft_memalloc ft_memdel \
		 ft_strnew ft_strdel ft_strclr ft_striter ft_striteri ft_strmap \
		 ft_strmapi ft_strequ ft_strnequ ft_strsub ft_strjoin ft_strtrim \
		 ft_strsplit ft_itoa ft_putchar ft_putstr ft_putendl ft_putnbr \
		 ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd \
		 ft_power ft_iswspace ft_strndup ft_count_words ft_strcase \
		 ft_strtolower ft_strtoupper ft_putbits ft_putbits_fd ft_reversebits \
		 ft_atoi_base ft_strjoinfree ft_gnl ft_exit \
		 ft_error ft_error_unknown ft_freestrarr ft_uitoa \
		 ft_bswap_utils ft_putbytes ft_putbytes_fd ft_sizeof_ndarray ft_bswap \
		 ft_strjoin_ml ft_count_lines ft_count_chars ft_getopts ft_random \
		 ft_md5 ft_sha224 ft_sha256 ft_sha384 ft_sha512 ft_ultoa ft_putbool \
		 ft_color

SRC		= $(patsubst %, %.c, $(FUNCTS))

OBJ		= $(addprefix $(OBJDIR),$(SRC:.c=.o))

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -g

SRCDIR	= ./srcs/
INCDIR	= ./includes/
OBJDIR	= ./objs/

all: obj $(NAME)

obj:
	@mkdir -p $(OBJDIR)

$(OBJDIR)%.o:$(SRCDIR)%.c
	@echo $(LIBNAME): Compiling $@
	@$(CC) $(CFLAGS) -I $(INCDIR) -o $@ -c $<

$(NAME): $(OBJ)
	@echo $(LIBNAME): Compiling $(NAME)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@echo $(LIBNAME): Removing objects folder
	@rm -rf $(OBJDIR)

fclean: clean
	@echo libft: Removing libft.a
	@rm -rf $(NAME)

re: fclean all
