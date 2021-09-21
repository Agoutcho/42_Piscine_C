/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atchougo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 00:12:34 by atchougo          #+#    #+#             */
/*   Updated: 2021/09/18 01:55:55 by atchougo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 1;
	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(*tab) * (max - min));
	tab[0] = min;
	while (tab[i] != (max - 1))
	{
		tab[i] = tab[i - 1] + 1;
		i++;
	}
	return (tab);
}
