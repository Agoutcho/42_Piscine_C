/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atchougo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 17:10:06 by atchougo          #+#    #+#             */
/*   Updated: 2021/09/07 21:19:37 by atchougo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putcharp(int nb, int n)
{
	unsigned int	tab[13];
	int	i;

	i = n;
	while (n > 0)
	{
		tab[n] = nb % 10;
		nb /= 10;
		n--;
	}
	while (n < i)
	{
		ft_putchar(tab[n] + 48);
		n++;
	}
}

void	remplir_tabfin(int *tab1)
{
	tab1[0] = 0;
	tab1[1] = 10;
	tab1[2] = 90;
	tab1[3] = 790;
	tab1[4] = 6790;
	tab1[5] = 56790;
	tab1[6] = 456790;
	tab1[7] = 3456790;
	tab1[8] = 23456790;
	tab1[9] = 123456790;
}

void	remplir_tabsup(int *tab1)
{
	tab1[0] = 0;
	tab1[8] = 3;
	tab1[7] = 34;
	tab1[6] = 445;
	tab1[5] = 5556;
	tab1[4] = 66667;
	tab1[3] = 777778;
	tab1[2] = 8888889;
	tab1[1] = 100000000;
}

void	ft_print_combn(int n)
{
	int	tab_fin[10];
	int	tab_sup[9];
	int	i;
	int j;

	i = 0;
	j = 0;
	if (n > 0 && n < 10)
	{
	remplir_tabfin(tab_fin);
	remplir_tabsup(tab_sup);
	tab_fin[0] = tab_fin[n];
	while(i<9)
	{
		printf("\033[1;32m \n\ntab fin :%d",tab_fin[i]);
		printf("\033[1;31m \ntab sup :%d",tab_sup[i]);
		i++;
	}
	printf("\033[1;36m \n%d et %d",tab_fin[n],tab_fin[0]);
	while (i < tab_fin[0] && n > 0)
		{
			while (j < 10)
			{
				i++;
				j++;
				printf("%d",i);
				ft_putcharp(i, n);
			}
			i = i + tab_sup[n];
			n--;
			j = 0;
			if (!(i == (tab_fin[0]) - 1))
				write(1, ", ", 2);
		}
	}
}

int main()
{
	ft_print_combn(2);
}
