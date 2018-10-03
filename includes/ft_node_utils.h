/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_node_utils.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwood <gwood@42.us.org>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 16:49:47 by gwood             #+#    #+#             */
/*   Updated: 2018/09/02 17:15:03 by gwood            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_NODE_UTILS_H
# define FT_NODE_UTILS_H

# include "ft_node.h"

void	ft_node_append(t_node *node, t_content content);
void	ft_node_prepend(t_node *node, t_content content);

#endif
