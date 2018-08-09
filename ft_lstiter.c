/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwood <gwood@42.us.org>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 17:49:28 by gwood             #+#    #+#             */
/*   Updated: 2018/08/08 16:17:39 by gwood            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	if (!lst)
		return ;
	if (lst->next)
		ft_lstiter(lst->next, f);
	f(lst);
}

void	ft_lstiter_data(t_list *lst, void (*f)(t_list *elem, void *), void *data)
{
	if (!lst)
		return ;
	if (lst->next)
		ft_lstiter_data(lst->next, f, data);
	f(lst, data);
}
