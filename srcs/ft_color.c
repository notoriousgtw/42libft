/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwood <gwood@42.us.org>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 15:25:58 by gwood             #+#    #+#             */
/*   Updated: 2018/10/03 18:27:41 by gwood            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_color.h"

void	ft_color(uint8_t r, uint8_t g, uint8_t b, t_color *color)
{
	if (FT_BYTE_ORDER == FT_LITTLE_ENDIAN)
	{
		color->a[2] = r;
		color->a[1] = g;
		color->a[0] = b;
	}
	else
	{
		color->a[1] = r;
		color->a[2] = g;
		color->a[3] = b;
	}
}

uint8_t	ft_color_get(t_color color, t_color_component c)
{
	return (color.a[c]);
}

void	ft_color_set(t_color *color, t_color_component c, uint8_t v)
{
	color->a[c] = v;
}

void	ft_color_lerp(t_color c1, t_color c2, double t, t_color *c3)
{
	c3->a[3] = (double) (c1.a[3] + (c2.a[3] - c1.a[3])) * t;
	c3->a[2] = (double) (c1.a[2] + (c2.a[2] - c1.a[2])) * t;
	c3->a[1] = (double) (c1.a[1] + (c2.a[1] - c1.a[1])) * t;
	c3->a[0] = (double) (c1.a[0] + (c2.a[0] - c1.a[0])) * t;
}
