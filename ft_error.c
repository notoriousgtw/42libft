/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwood <gwood@42.us.org>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/17 02:26:57 by gwood             #+#    #+#             */
/*   Updated: 2018/08/09 13:33:02 by gwood            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_error(char *s)
{
	ft_putendl_fd(s, 2);
	exit(EXIT_FAILURE);
}

void	ft_error_free(char *s, t_free_fnc free_data, void *data)
{
	ft_putendl_fd(s, 2);
	ft_exit(EXIT_FAILURE, free_data, data);
}
