/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atchougo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 21:51:56 by atchougo          #+#    #+#             */
/*   Updated: 2021/09/05 20:38:38 by atchougo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char c, char d, char u)
{
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &u, 1);
	if (c < '7')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	u;
	int	d;
	int	c;

	u = 2;
	d = 1;
	c = 0;
	while (c < 8)
	{
		while (d < 9)
		{
			while (u < 10)
			{
				ft_print(c + '0', d + '0', u + '0');
				u ++;
			}
			d ++ ;
			u = d + 1;
		}
		c ++ ;
		d = c + 1;
		u = d + 1;
	}
}
