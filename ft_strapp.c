/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strapp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwood <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 10:30:25 by gwood             #+#    #+#             */
/*   Updated: 2018/02/27 10:59:08 by gwood            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strapp(const char *s, char c)
{
	char *str;
	char *str_it;

	if ((str = ft_strnew((size_t)ft_strlen((char *)s) + 1)))
	{
		str_it = str;
		while (*s)
			*str_it++ = *s++;
		*str_it++ = c;
		*str_it = 0;
	}
	return (str);
}
