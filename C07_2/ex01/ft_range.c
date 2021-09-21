/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atchougo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 00:12:34 by atchougo          #+#    #+#             */
/*   Updated: 2021/09/20 23:02:41 by atchougo         ###   ########lyon.fr   */
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
	while (i < max - min)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
