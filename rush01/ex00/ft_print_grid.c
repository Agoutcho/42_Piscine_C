/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_grid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 16:37:30 by cben-bar          #+#    #+#             */
/*   Updated: 2021/09/12 21:35:47 by atchougo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_grid(int **grid, int GridSize)
{
	int	i;
	int	j;

	i = 0;
	while (i < GridSize)
	{
		j = 0;
		while (j < GridSize && grid[i][j])
		{
			ft_putchar(grid[i][j] + 48);
			if (j < 3)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
