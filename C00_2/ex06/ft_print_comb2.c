/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atchougo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 15:37:25 by atchougo          #+#    #+#             */
/*   Updated: 2021/09/04 21:03:36 by atchougo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int j, int i)
{
	char	a;
	char	b;

	a = j / 10 + '0';
	b = j % 10 + '0';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	a = i / 10 + '0';
	b = i % 10 + '0';
	write(1, &a, 1);
	write(1, &b, 1);
	if (! (j == 98 && i == 99))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 99)
	{
		while (j++ < 99)
		{
			ft_print(i, j);
		}
		j = i + 1;
		i++;
	}
}
