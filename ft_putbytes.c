/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbytes.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwood <gwood@42.us.org>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 14:49:49 by gwood             #+#    #+#             */
/*   Updated: 2018/08/01 10:53:36 by gwood            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void    ft_putbytes(const void *const data, size_t n, char delim)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        if (i > 0 && delim != NULL)
            ft_putchar(delim);
        ft_putbits(((t_byte *)data)[i++]);
    }
}

void    ft_putbytes_array(const void *const array, size_t array_length,
            size_t elem_size, char delim)
{
    size_t i;

    i = 0;
    while (i < array_length)
    {
        if (i > 0 && delim != NULL)
            ft_putchar(delim);
        ft_putbytes(array + (i * elem_size), elem_size);
        i++;
    }
}
