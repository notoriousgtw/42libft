/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sizeof_ndarray.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwood <gwood@42.us.org>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 12:21:41 by gwood             #+#    #+#             */
/*   Updated: 2018/08/15 12:55:07 by gwood            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_sizeof_ndarray(size_t elem_size, size_t ndims, size_t *dims)
{
	size_t	i;
	size_t	arr_size;

	if (dims == NULL)
		return (0);
	arr_size = elem_size;
	i = 0;
	while (i < ndims)
		arr_size *= dims[i++];
	return (arr_size);
}
