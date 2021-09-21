/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 18:29:02 by atchougo          #+#    #+#             */
/*   Updated: 2021/09/19 23:40:24 by atchougo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

char	*ft_fill_nbr(char *dico)
{
	char	*tab;
	int		i;

	i = 0;
	while (dico[i] && dico[i] >= '0' && dico[i] <= '9' && dico[i])
		i++;
	//printf("i ft_fill_nbr : %d\n",i);
	tab = malloc(sizeof(*tab) * (i + 2));
	if (!tab)
		return (0);
	i = 0;
	while (dico[i] >= '0' && dico[i] <= '9' && dico[i])
	{
		tab[i] = dico[i];
	//printf("tab[i] : %c et dico[i] : %c\n",tab[i],dico[i]);
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

int	ft_taille_name(char *dico, int *debut)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (dico[i] != ':')
		i++;
	i++;
	while (dico[i] == ' ')
		i++;
	*debut = i;
	while (dico[i] != '\n')
	{
		counter++;
		i++;
	}
	return (counter);
}

char	*ft_fill_name(char *dico, int *fin)
{
	int		i;
	int		debut;
	char	*tab;
	int		j;

	i = 0;
	j = 0;
	while (dico[i] != ':')
		i++;
	i++;
	tab = malloc(sizeof(char) * (ft_taille_name(dico, &debut) + 2));
	if (!tab)
		return (0);
	i = debut;
	while (dico[i] != '\n')
	{
		tab[j] = dico[i];
	//printf("tab[i] : %c et dico[i] : %c\n",tab[j],dico[i]);
		i++;
		j++;
	}
	if (!dico[i + 1])
		*fin = 1;
	dico += i;
	tab[j] = '\0';
	return (tab);
}

t_nbr	*ft_struct_fill(char *dico)
{
	int		i;
	int		j;
	int		fin;
	t_nbr	*tab;

	tab = malloc(sizeof(*tab) * 42);
	i = 0;
	j = 0;
	fin = 0;
	while (j < 41 && dico[i])
	{
		//printf("i avant : %d\n",i);
		tab[i].nb = ft_fill_nbr(dico);
		//printf("nombre : %s\n",tab[i].nb);
		tab[i].name = ft_fill_name(dico, &fin);
		//printf("name value : %s\n",tab[i].name);
		dico = ft_decal(dico);
		i++;
		//printf("i apres : %d\n",i);
		j++;
	}
	return (tab);
}
