/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwood <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 20:35:24 by gwood             #+#    #+#             */
/*   Updated: 2018/02/20 21:15:00 by gwood            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	void *save;
	void *d;
	const void *s;

	d = dst + n - 1;
	s = src + n - 1;
	save = dst;
	if (src > dst)
		return ((void *)ft_memcpy(dst, src, n));
	else
	{
		while (n--)
		{
			*(t_byte *)d-- = *(t_byte *)s--;
		}
	}

	return (save);
}
