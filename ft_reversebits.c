/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reversebits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwood <gwood@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 15:11:29 by gwood             #+#    #+#             */
/*   Updated: 2018/03/17 19:11:08 by gwood            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_byte	ft_reversebits(t_byte byte)
{
	int		i;
	t_byte	ret;

	ret = 0;
	i = 0;
	while (i < 8)
	{
		ret = ret << 1;
		ret += (byte >> i++) % 2;
	}
	return (ret);
}
