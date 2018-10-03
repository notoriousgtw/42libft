/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_node_add.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwood <gwood@42.us.org>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 16:44:11 by gwood             #+#    #+#             */
/*   Updated: 2018/09/02 17:13:37 by gwood            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_node.h"

void	ft_node_append(t_node *node, t_content content)
{
	t_node	*next;

	next = ft_node_init(node->list, content);
	if (node-next)
		node->next->prev = next;
	node->next = next;
}

void	ft_node_prepend(t_node *node, t_content content)
{
	t_node	*prev;

	prev = ft_node_init(node->list, content);
	if (node->prev)
		node->prev->next = prev;
	node->prev = prev;
}
