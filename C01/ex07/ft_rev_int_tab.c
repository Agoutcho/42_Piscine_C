/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atchougo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 00:00:09 by atchougo          #+#    #+#             */
/*   Updated: 2021/09/06 01:03:46 by atchougo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	c;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		c = tab[i];
		tab[i] = tab[size - (i + 1)];
		tab[size - (i + 1)] = c;
		i++;
	}
}
