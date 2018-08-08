/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwood <gwood@42.us.org>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 19:44:44 by gwood             #+#    #+#             */
/*   Updated: 2018/08/07 12:13:49 by gwood            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <inttypes.h>

static int	get_digits(uint32_t num, int base)
{
	int i;
	int j;

	i = 2;
	j = 9;
	while (num /= base)
	{
		i++;
		if (i > j)
			j += 8;
	}
	i += j - i;
	return (i);
}

char		*ft_uitoa_base(uint32_t n, int base)
{
	int		i;
	char	*str;
	char	*valid_chars;

	valid_chars = "0123456789abcdef";
	i = 2;
	i = get_digits(n, base);
	if (!(str = ft_memalloc(i--)))
		return (NULL);
	while (i--)
	{
		str[i] = valid_chars[n % base];
		n /= base;
	}
	while (base == 2 && str[i] != '1')
		str[i++] = '0';
	return (str);
}
