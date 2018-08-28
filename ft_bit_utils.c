/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bit_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwood <gwood@42.us.org>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 13:02:32 by gwood             #+#    #+#             */
/*   Updated: 2018/08/28 14:05:00 by gwood            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bit_utils.h"
#include <stdio.h>

t_bool	ft_getbit(uint64_t x, uint8_t b)
{
	return ((x >> (b - 1)) % 2);
}

t_bool	ft_setbit(uint64_t *x, uint8_t b, t_bool value)
{
	t_bool		save;
	uint64_t	head;
	uint64_t	tail;

	save = ft_getbit(*x, b);
	b--;
	head = ((((*x) >> (b + 1)) << 1) + value) << b;
	tail = ((*x) << (64 - b)) >> (64 - b);
	*x = head | tail;
	return (save);
}

void	ft_swapbits(uint64_t *x, uint8_t b1, uint8_t b2)
{
	t_bool		tmp;

	tmp = ft_getbit(*x, b1);
	ft_setbit(x, b1, ft_getbit(*x, b2));
	ft_setbit(x, b2, tmp);
}

uint64_t	ft_bit_permute_32_v(uint64_t x, uint8_t *t, uint8_t len)
{
	uint8_t		i;
	uint64_t	y;

	y = 0;
	i = 0;
	while (i < len)
	{
		ft_setbit(&y, i, ft_getbit(x, t[i]));
		i++;
	}
	return (y);
}
