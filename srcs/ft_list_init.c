/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwood <gwood@42.us.org>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 17:21:47 by gwood             #+#    #+#             */
/*   Updated: 2018/09/02 16:03:27 by gwood            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list			*ft_list_init(size_t content_size, t_free_fnc free_content_fnc)
{
	t_list *list;

	if (!(list = (t_list *)ft_memalloc(sizeof(t_list))))
		return (NULL);
	list->head = NULL;
	list->tail = NULL;
	list->free_content = free_content_fnc;
	list->prepend = NULL;
	list->append = &ft_append_node;
	list->get = NULL;
	list->set = NULL;
	list->insert = NULL;
	list->remove = NULL;
	list->length = 0;
	list->content_size = content_size;
	return (list);
}
