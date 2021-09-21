/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atchougo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 02:44:39 by atchougo          #+#    #+#             */
/*   Updated: 2021/09/20 19:36:48 by atchougo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_add_sep(char *tab, char *sep, int k)
{
	int	j;

	j = 0;
	while (sep[j])
	{
		tab[k] = sep[j];
		j++;
		k++;
	}
	return (k);
}

int	ft_taille_total(char **strs, char *sep, int size)
{
	int	i;
	int	sep_len;
	int	strs_len;
	int	counter;

	counter = 0;
	i = 0;
	sep_len = 0;
	strs_len = 0;
	while (sep[sep_len])
		sep_len++;
	while (i < size)
	{
		strs_len = 0;
		while (strs[i][strs_len])
		{
			strs_len++;
		}
		counter += strs_len;
		i++;
	}
	return (counter + (sep_len * size));
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*tab;

	if (!size)
	{
		tab = malloc(sizeof(char));
		*tab = '\0';
		return (tab);
	}
	tab = malloc(sizeof(char) * (ft_taille_total(strs, sep, size) + 1));
	i = -1;
	j = 0;
	k = 0;
	while (++i < size)
	{
		while (strs[i][j])
			tab[k++] = strs[i][j++];
		j = 0;
		if (i < size - 1)
			k = ft_add_sep(tab, sep, k);
	}
	tab[k] = '\0';
	return (tab);
}
