/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getopts.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwood <gwood@42.us.org>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 12:30:27 by gwood             #+#    #+#             */
/*   Updated: 2018/08/16 14:02:26 by gwood            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_getopts.h"

static t_opts	*newopt(char opt, char *arg)
{
	t_opts *ret;

	if (!(ret = (t_opts *)ft_memalloc(sizeof(t_opts))))
		return (NULL);
	ret->opt = opt;
	if (arg)
		ret->arg = arg;
	else
		ret->arg = NULL;
	ret->next = NULL;
	return (ret);
}

static void	addopt(t_opts **opts, char opt, char *arg)
{
	t_opts *new_opt;

	if (*opts == NULL)
		*opts = newopt(opt, arg);
	else
	{
		new_opt = newopt(opt, arg);
		new_opt->next = *opts;
		*opts = new_opt;
	}
}

char	checkopts(char *argv[], char *optstr, char **optarg, t_bool *end)
{
	int	 i;
	int	 optcnt;

	optcnt = ft_strlen(optstr) - ft_count_chars(optstr, ';') -
		ft_count_chars(optstr, ':');
	i = 0;
	while (i < optcnt)
	{
		if (!ft_strncmp(optstr + i, argv[0] + 1, 1))
		{
			if (!ft_strncmp(optstr + i + 1, ":", 1) && argv[1])
				*optarg = argv[1];
			if (!ft_strncmp(optstr + i + 1, ";", 1) && argv[1])
			{
				*optarg = argv[1];
				*end = true;
			}
			return (*(argv[0] + 1));
		}
		i++;
	}
	return (0);
}

t_opts	*ft_getopts(int argc, char *argv[], char *optstr)
{
	int	 i;
	t_opts	*opts;
	t_bool	end;
	char	opt;
	char	*optarg;

	if (argc < 1 || argv == NULL || optstr == NULL)
		return (NULL);
	end = false;
	opts = NULL;
	optarg = NULL;
	i = 1;
	while (i < argc)
	{
		if (ft_strncmp(argv[i], "-", 1))
		{
			i++;
			break;
		}
		opt = checkopts(&(argv[i]), optstr, &optarg, &end);
		if (opt)
			addopt(&opts, opt, optarg);
		i++;
	}
	return (opts);
}

void	ft_freeopts(t_opts **opts)
{
	t_opts *tmp;
	t_opts *lst;

	lst = *opts;
	while (lst != NULL)
	{
		tmp = lst->next;
		// ft_strdel(&lst->arg);
		free(lst);
		lst = tmp;
	}
}
