/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbytes_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwood <gwood@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 14:49:49 by gwood             #+#    #+#             */
/*   Updated: 2018/08/13 12:50:43 by gwood            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putbytes_fd(const void *const data, size_t n, int fd)
{
	size_t i;

	i = 0;
	while (i < n)
		ft_putbits_fd(((t_byte *)data)[i++], fd);
}
