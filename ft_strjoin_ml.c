/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_ml.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwood <gwood@42.us.org>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 16:34:49 by gwood             #+#    #+#             */
/*   Updated: 2018/07/31 16:36:17 by gwood            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin_ml(char *s1, const char *s2)
{
    size_t  i;
    size_t  lines;
    char    *ret;
    char    **l1;
    char    **l2;

    if (s1 == NULL || s2 == NULL ||
        ft_count_lines(s1) != ft_count_lines((char *)s2))
        return (NULL);
    if ((ret = ft_strnew(ft_strlen(s1) + ft_strlen((char *)s2))))
    {
        lines = ft_count_lines(s1);
        l1 = ft_strsplit(s1, '\n');
        l2 = ft_strsplit(s2, '\n');
        i = 0;
        while (i < lines)
        {
            ret = ft_strcat(ret, l1[i]);
            ret = ft_strcat(ret, l2[i]);
            if (i < lines - 1)
                ret = ft_strcat(ret, "\n");
            i++;
        }
        ft_freestrarr(l1);
        ft_freestrarr(l2);
    }
    return (ret);
}
