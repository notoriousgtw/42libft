/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_node.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwood <gwood@42.us.org>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 20:28:25 by gwood             #+#    #+#             */
/*   Updated: 2018/09/02 17:16:22 by gwood            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_node.h"

static void		ft_node_del(t_node *node)
{
	if (!node)
		return ;
	if (node->prev)
		node->prev->next = node->next;
	if (node->next)
		node->next->prev = node->prev;
	node->list->free_content(node->content);
	free(node);
}

static void		ft_node_set(t_node *node, t_content content, t_content prev)
{
	if (!node)
		return ;
	if (prev)
		prev = node->content;
	else
		node->list->free_content(node->content);
	node->content = content;
}

static t_node	*ft_node_seek(t_node *node, size_t n, t_dir dir)
{
	if (!node)
		return (NULL);
	if (n <= 0)
		return node;
	if (dir && node->next)
		return ft_node_seek(node->next, n--, dir);
	if (!dir && node->prev)
		return ft_node_seek(node->prev, n--, dir);
	return (NULL);
}

t_node			*ft_node_init(t_list *list, t_content content)
{
	t_node	*node;

	if (!(node = (t_node *)ft_memalloc(sizeof(t_node))))
		return (NULL);
	node->content = content;
	node->list = list;
	node->prev = NULL;
	node->next = NULL;
	node->prepend = &ft_node_prepend;
	node->append = &ft_node_append;
	node->set = &ft_node_set;
	node->seek = &ft_node_seek;
	node->del = &ft_node_del;
	return (node);
}
