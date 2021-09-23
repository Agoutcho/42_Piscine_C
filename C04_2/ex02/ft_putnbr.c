/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atchougo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 22:13:33 by atchougo          #+#    #+#             */
/*   Updated: 2021/09/11 22:13:54 by atchougo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
