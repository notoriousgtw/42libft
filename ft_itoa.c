/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwood <gwood@42.us.org>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 19:44:44 by gwood             #+#    #+#             */
/*   Updated: 2018/08/10 10:08:16 by gwood            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwood <gwood@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 19:44:44 by gwood             #+#    #+#             */
/*   Updated: 2018/05/29 17:39:01 by gwood            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_digits(long num, int base)
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

static void	neg(int64_t *n, t_bool *negative, int *i)
{
	if (*n < 0)
	{
		*n *= -1;
		*negative = true;
		*i += 1;
	}
}

char		*ft_itoa(int32_t n, int base)
{
	int64_t	num;
	int		i;
	char	*str;
	t_bool	negative;
	char	*valid_chars;

	num = (long)n;
	valid_chars = "0123456789abcdef";
	i = 2;
	negative = false;
	i = get_digits(num, base);
	neg(&num, &negative, &i);
	if (!(str = ft_memalloc(i--)))
		return (NULL);
	while (i--)
	{
		str[i] = valid_chars[num % base];
		num /= base;
	}
	if (negative)
		str[++i] = '-';
	while (base == 2 && str[i] != '1')
		str[i++] = '0';
	return (str);
}
