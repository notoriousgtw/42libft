/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_ml.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwood <gwood@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 16:34:49 by gwood             #+#    #+#             */
/*   Updated: 2018/08/13 12:44:56 by gwood            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	***get_lines(char *s1, const char *s2)
{
	char ***lines;

	if (!(lines = ft_memalloc(sizeof(char **) * 2)))
		return (NULL);
	lines[0] = ft_strsplit(s1, '\n');
	lines[1] = ft_strsplit(s2, '\n');
	return (lines);
}

static void	free_lines(char ***lines)
{
	ft_freestrarr(lines[0]);
	ft_freestrarr(lines[1]);
	free(lines);
}

char		*ft_strjoin_ml(char *s1, const char *s2)
{
	size_t	i;
	size_t	line_count;
	char	*ret;
	char	***lines;

	if (s1 == NULL || s2 == NULL ||
		ft_count_lines(s1) != ft_count_lines((char *)s2))
		return (NULL);
	if ((ret = ft_strnew(ft_strlen(s1) + ft_strlen((char *)s2))))
	{
		line_count = ft_count_lines(s1);
		if (!(lines = get_lines(s1, s2)))
			return (NULL);
		i = 0;
		while (i < line_count)
		{
			ret = ft_strcat(ret, lines[0][i]);
			ret = ft_strcat(ret, lines[1][i]);
			if (i < line_count - 1)
				ret = ft_strcat(ret, "\n");
			i++;
		}
		free_lines(lines);
	}
	return (ret);
}
