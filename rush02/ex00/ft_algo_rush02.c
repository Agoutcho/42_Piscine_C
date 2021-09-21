/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_rush02.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 04:41:49 by atchougo          #+#    #+#             */
/*   Updated: 2021/09/19 23:40:18 by atchougo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_printstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_cmp(char *str, t_nbr *s_tab)
{
	int	i;

	i = 1;
	while (s_tab[i].nb[0] > '0' && s_tab[i].nb[0] <= '9')
	{
		if (str[0] == s_tab[i].nb[0])
			break;
		i++;
	}
	return (s_tab[i].name);
}

char	*ft_cmp2(char *str, t_nbr *s_tab)
{
	int	i;

	i = 1;
	if (str[0] > '1')
	{
		while (s_tab[i].nb[0] > '0' && s_tab[i].nb[0] <= '9')
		{
			if (str[0] == s_tab[i].nb[0])
				break;
			i++;
		}
	}
	else if (str[0] == '1')
	{
		i = 10;
		while (s_tab[i].nb[1] >= '0' && s_tab[i].nb[1] <= '9')
		{
			if (str[1] == s_tab[i].nb[1])
				break;
			i++;
		}
	}

	return (s_tab[i].name);
}


