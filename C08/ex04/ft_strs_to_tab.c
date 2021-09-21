/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atchougo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 00:33:50 by atchougo          #+#    #+#             */
/*   Updated: 2021/09/21 17:21:39 by atchougo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

char	*ft_strdup(char *src)
{
	int		src_len;
	char	*ptr;

	src_len = 0;
	while (src[src_len])
		src_len++;
	ptr = malloc(sizeof(*ptr) * src_len + 1);
	if (!ptr)
		return (NULL);
	src_len = 0;
	while (src[src_len])
	{
		ptr[src_len] = src[src_len];
		src_len++;
	}
	ptr[src_len] = '\0';
	return (ptr);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;

	i = 0;
	tab = malloc(sizeof(*tab) * (ac + 1));
	if (!tab)
		return (NULL);
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = ft_strdup(av[i]);
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
/*
#include <stdio.h>

int main(int argc, char **argv)
{
	int i = 0;
	t_stock_str *clef;

	clef = ft_strs_to_tab(argc, argv);
	while (clef[i].str != 0)
	{
		printf("%s\n", clef[i].str);
		printf("%d\n", clef[i].size);
		printf("%s\n", clef[i].copy);
		i++;
	}
}
*/
