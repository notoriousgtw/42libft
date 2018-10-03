/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bswap_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwood <gwood@42.us.org>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 17:39:13 by gwood             #+#    #+#             */
/*   Updated: 2018/08/15 12:52:58 by gwood            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "inttypes.h"

void	ft_bswap16_v(void *const data)
{
	*(uint16_t *)data = ((*(uint16_t *)data & 0x00FF) << 8) |
						((*(uint16_t *)data & 0xFF00) >> 8);
}

void	ft_bswap32_v(void *const data)
{
	*(uint32_t *)data = ((*(uint32_t *)data & 0x000000FF) << 24) |
						((*(uint32_t *)data & 0x0000FF00) << 8) |
						((*(uint32_t *)data & 0x00FF0000) >> 8) |
						((*(uint32_t *)data & 0xFF000000) >> 24);
}

void	ft_bswap64_v(void *const data)
{
	*(uint64_t *)data = ((*(uint64_t *)data & 0x00000000000000FFULL) << 56) |
						((*(uint64_t *)data & 0x000000000000FF00ULL) << 40) |
						((*(uint64_t *)data & 0x0000000000FF0000ULL) << 24) |
						((*(uint64_t *)data & 0x00000000FF000000ULL) << 8) |
						((*(uint64_t *)data & 0x000000FF00000000ULL) >> 8) |
						((*(uint64_t *)data & 0x0000FF0000000000ULL) >> 24) |
						((*(uint64_t *)data & 0x00FF000000000000ULL) >> 40) |
						((*(uint64_t *)data & 0xFF00000000000000ULL) >> 56);
}
