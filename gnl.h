/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwood <gwood@42.us.org>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 19:21:19 by gwood             #+#    #+#             */
/*   Updated: 2018/07/24 19:24:01 by gwood            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNL_H
# define GNL_H

typedef struct			s_gnl
{
	struct s_gnl	*next;
	struct s_gnl	*prev;
	char			*c;
	int				fd;
}						t_gnl;

int						ft_gnl(const int fd, char **line);

#endif
