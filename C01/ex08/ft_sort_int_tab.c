/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atchougo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 00:22:13 by atchougo          #+#    #+#             */
/*   Updated: 2021/09/06 00:55:52 by atchougo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	c;
	int	i;
	int	j;

	j = 0;
	i = 1;
	while (j < size)
	{
		while (i < size)
		{
			if (tab[j] > tab[i])
			{
				c = tab[j];
				tab[j] = tab[i];
				tab[i] = c;
			}
			i++;
		}
		j++;
		i = j + 1;
	}
}
