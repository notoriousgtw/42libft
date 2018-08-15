/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwood <gwood@42.us.org>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 13:15:36 by gwood             #+#    #+#             */
/*   Updated: 2018/08/15 12:50:27 by gwood            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_fnc_tab	*ft_init_fnc_tab(char **names, void *funcs)
{
	size_t		count;
	t_fnc_tab	*ret;

	ret = (t_fnc_tab *)ft_memalloc(sizeof(t_fnc_tab));
	ret->fptr_size = sizeof(*funcs)
	return (ret);
}

void		ft_clean_fnc_tab(t_fnc_tab *tab)
{
	ft_freestrarr(tab->names);

}
