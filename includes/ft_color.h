/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwood <gwood@42.us.org>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 14:30:17 by gwood             #+#    #+#             */
/*   Updated: 2018/10/03 18:26:51 by gwood            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #ifndef FT_COLOR_H
// # ifdef FT_COLOR_H

# include <inttypes.h>
# include "ft_bswap_utils.h"

# if FT_BYTE_ORDER == FT_LITTLE_ENDIAN
typedef enum	e_color_component
{
	b,
	g,
	r,
	a
}				t_color_component;
# else
typedef enum	e_color_component
{
	a,
	r,
	g,
	b
}				t_color_component;
# endif

typedef union	u_color
{
	uint32_t	i;
	uint8_t		a[4];
}				t_color;

void			ft_color(uint8_t r, uint8_t g, uint8_t b, t_color *color);
uint8_t			ft_color_get(t_color color, t_color_component c);
void			ft_color_set(t_color *color, t_color_component c, uint8_t v);
void			ft_color_lerp(t_color c1, t_color c2, double t, t_color *c3);

// #endif
