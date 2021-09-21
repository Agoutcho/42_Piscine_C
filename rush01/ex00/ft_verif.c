/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 10:27:22 by jereverd          #+#    #+#             */
/*   Updated: 2021/09/12 22:40:02 by atchougo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	verif_left(int **grid, int line, int nb_box_visible_exp, int GridSize)
{
	int	i;
	int	*line2;
	int	number_of_box_visible;

	line2 = grid[line];
	i = 0;
	number_of_box_visible = 1;
	while (i < GridSize)
	{
		i++;
		if ((i + 1) < GridSize && line2[i + 1] > line2[i])
			number_of_box_visible++;
	}
	if ((nb_box_visible_exp - number_of_box_visible) == 0)
		return (1);
	return (0);
}

int	verif_right(int **grid, int line, int nb_box_visible_exp, int GridSize)
{
	int	i;
	int	*line2;
	int	number_of_box_visible;

	line2 = grid[line];
	i = GridSize;
	number_of_box_visible = 1;
	while (i > GridSize - 1)
	{
		i--;
		if ((i - 1) < GridSize && line2[i - 1] > line2[i])
			number_of_box_visible++;
	}
	if ((nb_box_visible_exp - number_of_box_visible) == 0)
		return (1);
	return (0);
}

int	verif_up(int **grid, int col, int nb_box_visible_exp, int GridSize)
{
	int	i;
	int	*col2;
	int	number_of_box_visible;

	col2 = grid[col];
	i = 0;
	number_of_box_visible = 1;
	while (i < GridSize)
	{
		i++;
		if ((i + 1) < GridSize && col2[i + 1] > col2[i])
			number_of_box_visible++;
	}
	if ((nb_box_visible_exp - number_of_box_visible) == 0)
		return (1);
	return (0);
}

int	verif_down(int **grid, int col, int nb_box_visible_exp, int GridSize)
{
	int	i;
	int	*col2;
	int	number_of_box_visible;

	col2 = grid[col];
	i = GridSize;
	number_of_box_visible = 1;
	while (i > GridSize - 1)
	{
		i--;
		if ((i - 1) < GridSize && col2[i - 1] > col2[i])
			number_of_box_visible++;
	}
	if ((nb_box_visible_exp - number_of_box_visible) == 0)
		return (1);
	return (0);
}
