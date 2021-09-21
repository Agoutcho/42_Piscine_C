/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atchougo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 01:56:34 by atchougo          #+#    #+#             */
/*   Updated: 2021/09/18 02:22:31 by atchougo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
	{
		range[0] = NULL;
		return (0);
	}
	range[0] = malloc(sizeof(*tab) * (max - min));
	if (!range[0])
		return (-1);
	while (min < (max))
	{
		range[0][i] = min;
		min++;
		i++;
	}
	return (i);
}
