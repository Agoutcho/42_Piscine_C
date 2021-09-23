/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atchougo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 12:57:12 by atchougo          #+#    #+#             */
/*   Updated: 2021/09/23 15:11:04 by atchougo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_operator_is_ok(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	if (!(str[0] == '+' || str[0] == '-' || str[0] == '/'
			|| str[0] == '%' || str[0] == '*'))
	{
		ft_putchar('0');
		write(1, "\n", 1);
		return (0);
	}
	return (1);
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

void	ft_doop(int v1, int v2, int (*f)(int val1, int val2))
{
	ft_putnbr((*f)(v1, v2));
	write(1, "\n", 1);
}
