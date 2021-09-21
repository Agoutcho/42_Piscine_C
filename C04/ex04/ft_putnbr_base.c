/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atchougo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:00:10 by atchougo          #+#    #+#             */
/*   Updated: 2021/09/14 22:16:10 by atchougo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
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

void	affichage(unsigned int un_nbr, unsigned int base_len, int *tab, char *b)
{
	int	i;

	i = 12;
	while (un_nbr != 0 && i >= 0)
	{
		tab[i] = un_nbr % (base_len);
		un_nbr /= (base_len);
		i--;
	}
	while (i++ < 13)
		putchar(b[tab[i]]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	base_len;
	unsigned int	un_nbr;
	int				tab[13];

	base_len = 0;
	un_nbr = 0;
	if (checkerror(base))
		return ;
	while (base[base_len])
		base_len++;
	if (nbr == 0)
	{
		putchar(base[tab[0]]);
		return ;
	}
	if (nbr < 0)
	{
		un_nbr = -nbr;
		putchar('-');
	}
	else
		un_nbr = nbr;
	affichage(un_nbr, base_len, tab, base);
}

void	ft_putnbr_base(int nbr, char *base);

int		main(void)
{
	write(1, "42:", 3);
	ft_putnbr_base(-2147483648, "012345678");
	write(1, "\n2a:", 4);
	ft_putnbr_base(32, "0123456789abcdef");
	write(1, "\n-2a:", 5);
	ft_putnbr_base(-42, "0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "0");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "+-0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "\t0123456789abcdef");
}
