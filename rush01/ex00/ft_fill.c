/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atchougo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 19:07:40 by atchougo          #+#    #+#             */
/*   Updated: 2021/09/12 22:41:25 by atchougo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_print_grid(int **grid, int GridSize);

void	ft_fill(int **grid)
{
	int	x;
	int	y;
	int	i;

	i = 0;
	x = 0;
	y = 0;
	while (y < 4)
	{
		grid[y] = malloc(sizeof(int) * 5);
		while (x < 4)
		{
			if ((i % 5) == 0)
				i++;
			grid[y][x] = (i % 5);
			x++;
			i++;
		}
		y++;
		i--;
		x = 0;
	}
}
