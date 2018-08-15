/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bswap_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwood <gwood@42.us.org>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 12:22:26 by gwood             #+#    #+#             */
/*   Updated: 2018/08/15 12:54:14 by gwood            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_bswap_utils.h"
#include <inttypes.h>

static t_bswap		*init(const void *const array, size_t array_size,
						size_t elem_size)
{
	t_bswap *ret;

	ret = (t_bswap *)ft_memalloc(sizeof(t_bswap));
	ret->elem_size = elem_size;
	ret->array_size = array_size;
	ret->a = ft_memalloc(ret->array_size);
	if (!ret->a)
		return (NULL);
	ft_memcpy(ret->a, array, ret->array_size);
	return (ret);
}

static t_bswap_fnc	get_func(size_t elem_size)
{
	if (elem_size == 2)
		return (&ft_bswap16_v);
	else if (elem_size == 4)
		return (&ft_bswap32_v);
	else if (elem_size == 8)
		return (&ft_bswap64_v);
	else
		return (NULL);
}

void				*ft_bswap_array(const void *const array,
						size_t array_length, size_t elem_size)
{
	size_t	i;
	t_bswap *d;
	void	*element;

	if (array == NULL || elem_size <= 1)
		return (NULL);
	d = init(array, array_length * elem_size, elem_size);
	if (d == NULL)
		return (NULL);
	d->bswap = get_func(d->elem_size);
	i = 0;
	while (i < d->array_size)
	{
		element = (t_byte *)d->a + i;
		d->bswap(element);
		i += elem_size;
	}
	return (d->a);
}
