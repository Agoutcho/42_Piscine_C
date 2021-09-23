/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atchougo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:00:10 by atchougo          #+#    #+#             */
/*   Updated: 2021/09/23 21:39:17 by atchougo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	checkerror(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (base[0] == 0 || base[1] == 0)
		return (1);
	while (base[i])
	{
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		if (base[i] == 43 || base[i] == 45 || (base[i] < 33 && base[i] > 0))
			return (1);
		i++;
		j = i + 1;
	}
	return (0);
}

void	ft_putnbr(unsigned int nb, char *base, int base_len)
{
	if (nb == 0)
		return ;
	ft_putnbr((nb / base_len), base, base_len);
	ft_putchar((base[(nb % base_len)]));
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	base_len;
	unsigned int	un_nbr;

	base_len = 0;
	un_nbr = 0;
	if (checkerror(base))
		return ;
	while (base[base_len])
		base_len++;
	if (nbr < 0)
	{
		un_nbr = -nbr;
		ft_putchar('-');
	}
	else
		un_nbr = nbr;
	ft_putnbr(un_nbr, base, base_len);
}
