/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getopts.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwood <gwood@42.us.org>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 12:31:17 by gwood             #+#    #+#             */
/*   Updated: 2018/08/15 12:41:35 by gwood            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GETOPTS_H
# define FT_GETOPTS_H

#include "libft.h"

typedef struct	s_opts
{
	char			opt;
	char			*arg;
	struct s_opts	*next;
}				t_opts;

t_opts			*ft_getopts(int argc, char *argv[], char *optstr);
void			ft_freeopts(t_opts **opts);

#endif
