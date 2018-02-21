/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_typedefs.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwood <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 19:51:13 by gwood             #+#    #+#             */
/*   Updated: 2018/02/20 22:08:05 by gwood            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBF_TYPEDEFS_H
# define LIBF_TYPEDEFS_H

typedef unsigned char	t_byte;
typedef struct			s_list
{
	void				*content;
	size_t				content_size;
	struct s_list		*next;
}						t_list;

#endif
