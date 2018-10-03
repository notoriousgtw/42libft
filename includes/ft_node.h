/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_node.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwood <gwood@42.us.org>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 20:31:30 by gwood             #+#    #+#             */
/*   Updated: 2018/09/02 16:52:28 by gwood            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_NODE_H
# define FT_NODE_H

# include "ft_list.h"
# include "ft_node_utils.h"

typedef struct s_list	t_list;
typedef struct s_node	t_node;
typedef void			*t_content;

typedef void			(*t_node_add)(t_content content);
typedef void			(*t_node_set)(t_node node, t_content content);
typedef t_node			*(*t_node_seek)(t_node *node, size_t n, t_dir dir);
typedef void			(*t_node_del)(t_node *node);

struct					s_node
{
	t_list		*list;
	t_content	content;
	t_node		*prev;
	t_node		*next;
	t_node_add	prepend;
	t_node_add	append;
	t_node_set	set;
	t_node_seek	seek;
	t_node_del	del;
};

t_node					*ft_node_init(t_list *list, t_content content);

#endif
