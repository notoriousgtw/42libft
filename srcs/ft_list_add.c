/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_add.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwood <gwood@42.us.org>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 21:15:24 by gwood             #+#    #+#             */
/*   Updated: 2018/09/02 16:53:34 by gwood            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_list.h"
#include	"ft_node.h"

static t_content	init_list(t_list *list, t_content content)
{
	t_node	*node;

	node = ft_node_init(list, content);
	list->head = node;
	list->tail = node;
	list->length++;
	return (content);
}

t_content			ft_list_append(t_list *list, t_content content)
{
	t_node	*node;

	if (list->head == NULL)
		return (init_list(list, content));
	node = ft_node_init(list, content);
	list->tail->next = node;
	node->prev = list->tail;
	list->tail = node;
	list->length++;
	return (content);
}

t_content			ft_list_prepend(t_list *list, t_content content)
{
	t_node	*node;

	if (list->head == NULL)
		return (init_list(list, content));
	node = ft_node_init(list, content);
	list->head->prev = node;
	node->next = list->head;
	list->head = node;
	list->length++;
	return (content);
}
