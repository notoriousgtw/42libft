/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bit_utils.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwood <gwood@42.us.org>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 13:02:34 by gwood             #+#    #+#             */
/*   Updated: 2018/08/28 14:31:24 by gwood            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BIT_UTILS_H
# define FT_BIT_UTILS_H

# include "libft.h"

// typedef union	u_ints
// {
// 	int16_t		s8;
// 	int16_t		s16;
// 	int32_t		s32;
// 	int64_t		s64;
// 	uint16_t	u8;
// 	uint16_t	u16;
// 	uint32_t	u32;
// 	uint64_t	u64;
// }				t_ints;

t_bool		ft_getbit(uint64_t x, uint8_t b);
t_bool		ft_setbit(uint64_t *x, uint8_t b, t_bool value);
void		ft_swapbits(uint64_t *x, uint8_t b1, uint8_t b2);
uint64_t	ft_bit_permute_32_v(uint64_t x, uint8_t *t, uint8_t len);
uint64_t	ft_getbitstr(uint64_t x, uint8_t b, uint8_t n);

#endif
