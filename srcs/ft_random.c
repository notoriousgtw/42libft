/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_random.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwood <gwood@42.us.org>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 14:26:58 by gwood             #+#    #+#             */
/*   Updated: 2018/08/28 14:50:40 by gwood            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_md5.h"

char    *ft_rndstr(size_t size)
{
    uint32_t    i;
    int         urnd_fd;
    int         check;
    char        buf[1];
    char        *ret;

    ret = ft_strnew(size);
    if ((urnd_fd = open("/dev/urandom", O_RDONLY)) < 0)
        ft_error_unknown("/dev/urandom: ");
    buf[0] = 0;
    i = 0;
    while (i < size)
    {
        if ((check = read(urnd_fd, buf, 1)) < 0)
            ft_error("ft_rndstr: failed to read from /dev/urandom");
        if (ft_isprint(*buf) && !ft_iswspace(*buf))
            ret[i++] = *buf;
    }
    return (ret);
}
