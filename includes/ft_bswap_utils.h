/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bswap_utils.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwood <gwood@42.us.org>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 10:17:47 by gwood             #+#    #+#             */
/*   Updated: 2018/10/03 18:28:00 by gwood            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BSWAP_UTILS_H
# define FT_BSWAP_UTILS_H

# include "libft.h"
# include <inttypes.h>

# define FT_LITTLE_ENDIAN 0
# define FT_BIG_ENDIAN 1
# define FT_BYTE_ORDER (__BYTE_ORDER__ == __ORDER_BIG_ENDIAN__)
typedef void	(*t_bswap_fnc)(void *const data);

typedef struct	s_bswap
{
	t_byte		*a;
	size_t		elem_size;
	size_t		array_size;
	t_bswap_fnc bswap;

}				t_bswap;

void			ft_bswap16_v(void *const data);
void			ft_bswap32_v(void *const data);
void			ft_bswap64_v(void *const data);

#endif
