/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwood <gwood@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 15:33:49 by gwood             #+#    #+#             */
/*   Updated: 2018/03/17 19:21:09 by gwood            ###   ########.fr       */
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

char		*ft_itoa(int n)
{
	int		i;
	char	*str;
	int		tmp;
	int		negative;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = 2;
	negative = 0;
	tmp = n;
	neg(&n, &negative);
	while (tmp /= 10)
		i++;
	i += negative;
	if (!(str = malloc(i)))
		return (NULL);
	str[--i] = '\0';
	while (i--)
	{
		str[i] = (n % 10) + '0';
		n /= 10;
	}
	if (negative)
		str[0] = '-';
	return (str);
}
