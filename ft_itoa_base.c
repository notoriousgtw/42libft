/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwood <gwood@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 19:44:44 by gwood             #+#    #+#             */
/*   Updated: 2018/03/17 20:23:42 by gwood            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	neg(int *n, int *negative)
{
	if (*n < 0)
	{
		*n *= -1;
		*negative = 1;
	}
}

char		*ft_itoa_base(int n, int base)
{
	int		i;
	char	*str;
	int		tmp;
	int		negative;
	char	*valid_chars;

	valid_chars = "0123456789abcdef";
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = 2;
	negative = 0;
	tmp = n;
	neg(&n, &negative);
	while (tmp /= base)
		i++;
	i += negative;
	if (!(str = ft_memalloc(i--)))
		return (NULL);
	while (i--)
	{
		str[i] = valid_chars[n % base];
		n /= base;
	}
	if (negative)
		str[0] = '-';
	return (str);
}
