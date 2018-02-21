/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwood <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 15:00:22 by gwood             #+#    #+#             */
/*   Updated: 2018/02/21 15:02:48 by gwood            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	*ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	remsize;

	remsize = size;
	while (*dst && remsize > 0 && remsize--)
		dst++;
	while (*src && remsize > 1 && remsize--)
		*dst++ = *src++;
	if (remsize == 1)
		*dst = '\0';
	return (size - remsize);
}
