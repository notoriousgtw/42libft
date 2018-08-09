/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_unknown.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwood <gwood@42.us.org>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/17 02:31:09 by gwood             #+#    #+#             */
/*   Updated: 2018/08/09 13:37:35 by gwood            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <string.h>
#include <errno.h>

void	ft_error_unknown(void)
{
	ft_putstr_fd("Error: ", 2);
	ft_error(strerror(errno));
}

void	ft_error_unknown_free(t_free_fnc free_data, void *data)
{
	ft_putstr_fd("Error: ", 2);
	ft_error_free(strerror(errno), free_data, data);
}
