/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getopt.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwood <gwood@42.us.org>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 16:04:12 by gwood             #+#    #+#             */
/*   Updated: 2018/07/20 16:07:09 by gwood            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GETOPT_H
# define GETOPT_H

extern char *optarg;
extern int  optind, opterr, optopt;

int     ft_getopt(int argc, const char *argv[], const char *optstring);

#endif
