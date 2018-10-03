/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_get.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwood <gwood@42.us.org>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 14:36:13 by gwood             #+#    #+#             */
/*   Updated: 2018/09/02 15:41:48 by gwood            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_content	ft_list_get(t_list *list, size_t index)
{
	t_dir	dir;
	t_node	*iter;

	if (!list || index >= list->length || index < 0)
		return (NULL);
	dir = left;
	if (index < list->length / 2 && (dir = right))
		iter = list->head;
	else
		iter = list->tail;
	return (iter->seek(iter, index, dir)->content);
}
