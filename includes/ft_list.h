/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwood <gwood@42.us.org>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 19:42:48 by gwood             #+#    #+#             */
/*   Updated: 2018/09/02 16:41:53 by gwood            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include "libft.h"
# include "ft_node.h"

typedef struct s_list	t_list;
typedef struct s_node	t_node;
typedef void			*t_content;

typedef enum			e_dir
{
	left,
	right
}						t_dir;

typedef void			(*t_list_add)(t_list *list, t_content content);
typedef t_content		(*t_list_get)(t_list *list, size_t index);
typedef void			(*t_list_set)(t_list *list, t_content content, t_content prev);
typedef void			(*t_list_remove)(t_list *list, size_t index);
typedef void			(*t_list_del)(t_list *list);

struct					s_list
{
	t_node			*head;
	t_node			*tail;
	t_free_fnc		free_content;
	t_list_del		del;
	size_t			length;
	size_t			content_size;
	t_list_add		prepend;
	t_list_add		append;
	t_list_get		get;
	t_list_set		set;
	t_list_set		insert;
	t_list_remove	remove;
};

t_list					*ft_list_init(t_free_fnc free_content);
t_content				ft_append_node(t_list *list, t_content data);
t_content				ft_prepend_node(t_list *list, t_content data);

#endif
