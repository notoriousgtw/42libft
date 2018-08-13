/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwood <gwood@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 10:17:24 by gwood             #+#    #+#             */
/*   Updated: 2018/08/13 12:33:47 by gwood            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_bswap_utils.h"
#include <inttypes.h>

uint16_t	ft_bswap16(uint16_t n)
{
	ft_bswap16_v(&n);
	return (n);
}

uint32_t	ft_bswap32(uint32_t n)
{
	ft_bswap32_v(&n);
	return (n);
}

uint64_t	ft_bswap64(uint64_t n)
{
	ft_bswap64_v(&n);
	return (n);
}
