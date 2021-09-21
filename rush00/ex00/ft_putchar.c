/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 13:53:58 by aleferra          #+#    #+#             */
/*   Updated: 2021/09/05 19:26:19 by atchougo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
 * 	retourne l'indice du caracatere a afficher dans le (char set[9]) de putgrid
 *	x:	taille d'une ligne - 1 pour comparaison avec xi
 *  y:  nb de colonnes - 1 pour comparaison avec yi
 *	xi: position dans la ligne
 *	yi: position dans les colonnes
 *
 * return 0 : char pour espaces (ni cotes ni coin)
 * return 1 : en haut a gauche
 * return 2 : en haut a droite
 * return 3 : en bas a gauche
 * return 4 : en bas a droite
 * 		  5 : cote haut
 * 		  6 : cote bas
 * 		  7 : cote droit
 * 		  8 : cote gauche 
 */

int	ft_getchar(int x, int y, int xi, int yi)
{
	if (yi == 0 && xi == 0)
		return (1);
	else if (yi == 0 && xi == x)
		return (2);
	else if (yi == y && xi == 0)
		return (3);
	else if (yi == y && xi == x)
		return (4);
	else if (yi == 0)
		return (5);
	else if (yi == y)
		return (6);
	else if (xi == 0)
		return (7);
	else if (xi == x)
		return (8);
	else
		return (0);
}

void	ft_putgrid(int x, int y, char set[9])
{
	int	yi;
	int	xi;

	x -= 1;
	y -= 1;
	yi = -1;
	while (++yi <= y)
	{
		xi = -1;
		while (++xi <= x)
		{
			ft_putchar(set[ft_getchar(x, y, xi, yi)]);
			if (xi == x)
				ft_putchar('\n');
		}
	}
}
