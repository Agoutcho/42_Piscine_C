/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atchougo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:48:21 by atchougo          #+#    #+#             */
/*   Updated: 2021/09/21 18:10:36 by atchougo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putcharp(unsigned int	*str, int i)
{
	while (i < 13)
	{
		ft_putchar(str[i] + 48);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	unsigned int	tab[13];
	unsigned int	un;
	int				i;

	i = 12;
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (nb < 0)
	{
		un = -nb;
		write(1, "-", 1);
	}
	else
		un = nb;
	while (un > 0)
	{
		tab[i] = un % 10;
		un /= 10;
		i--;
	}
	ft_putcharp(tab, i + 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_show_tab(struct s_stock_str *ptr)
{
	int	i;

	i = 0;
	while (ptr[i].str)
	{
		ft_putstr(ptr[i].str);
		write(1, "\n", 1);
		ft_putnbr(ptr[i].size);
		write(1, "\n", 1);
		ft_putstr(ptr[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
/*
int main(int argc, char **argv)
{
	t_stock_str	*str;

	str = ft_strs_to_tab(argc,argv);
	ft_show_tab(str);
}*/
