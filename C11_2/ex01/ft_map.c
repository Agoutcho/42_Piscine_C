/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atchougo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 23:04:09 by atchougo          #+#    #+#             */
/*   Updated: 2021/09/22 23:10:27 by atchougo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*tab_result;

	tab_result = malloc(sizeof(int) * length);
	if (!tab_result)
		return (NULL);
	i = 0;
	while (i < length)
	{
		tab_result[i] = (*f)(tab[i]);
		i++;
	}
	return (tab_result);
}
