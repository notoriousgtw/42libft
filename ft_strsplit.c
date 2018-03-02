/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwood <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 17:07:40 by gwood             #+#    #+#             */
/*   Updated: 2018/03/01 21:44:07 by gwood            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cntwrd(char const *s, char c)
{
	unsigned int	i;
	int				cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != 0)
			cnt++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (cnt);
}

char		**ft_strsplit(const char *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**ret;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	if (!(ret = (char **)malloc(sizeof(char *) * (ft_cntwrd(s, c)) + 1)))
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
			ret[k++] = ft_strndup(s + j, i - j);
	}
	ret[k] = NULL;
	return (ret);
}
