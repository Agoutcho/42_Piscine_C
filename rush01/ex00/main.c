/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 16:16:21 by cben-bar          #+#    #+#             */
/*   Updated: 2021/09/12 22:43:30 by atchougo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_check(char *str);

int		ft_strlen(char *str);

void	ft_putstr(char *str);

void	ft_putchar(char c);

void	ft_print_grid(int **grid, int GrideSize);

int		verif_down(int **grid, int col, int nb_box_visible_exp, int GridSize);

int		verif_up(int **grid, int col, int nb_box_visible_exp, int GridSize);

int		verif_right(int **grid, int line, int nb_box_visible_exp, int GridSize);

int		verif_left(int **grid, int line, int nb_box_visible_exp, int GridSize);

void	ft_fill(int **grid);

int	main(int ac, char **av)
{
	int	gridsize;
	int	**grid;
	int	**point_of_view;
	int	i;
	int	j;

	if (!ft_check(av[1]))
	{
		ft_putstr("Error");
		ft_putchar('\n');
		return (0);
	}
	gridsize = ((ft_strlen(av[1]) + 1) / 2) / 4;
	grid = malloc(sizeof(int *) * gridsize);
	point_of_view = malloc(sizeof(int) * gridsize);
	i = 0;
	while (i < gridsize)
	{
		i++;
		grid[i] = malloc(sizeof(int) * gridsize);
	}
	ft_fill(grid);
	ft_print_grid(grid, gridsize);
	return (0);
}
