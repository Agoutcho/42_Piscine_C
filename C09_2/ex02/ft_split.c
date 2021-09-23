/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atchougo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 00:30:05 by atchougo          #+#    #+#             */
/*   Updated: 2021/09/22 07:30:39 by atchougo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_is_a_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

unsigned int	ft_count_word(char *str, char *charset)
{
	int	i;
	int	count;
	int	big_bool;

	big_bool = 1;
	count = 0;
	i = 0;
	while (str[i])
	{
		if (ft_is_a_sep(str[i], charset))
		{
			big_bool = 1;
		}
		else if (big_bool == 1)
		{
			big_bool = 0;
			count++;
		}
		i++;
	}
	return (count);
}

char	*ft_copy_tab(char *str, int i, int j)
{
	int		k;
	char	*tab;

	k = 0;
	tab = malloc(sizeof(char) * ((j - i) + 1));
	tab[j - i] = 0;
	while (i < j && str[i])
	{
		tab[k] = str[i];
		k++;
		i++;
	}
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		counter;
	int		i;
	int		j;

	j = 0;
	i = 0;
	counter = ft_count_word(str, charset);
	tab = malloc((sizeof(tab) * (counter + 1)));
	tab[counter] = 0;
	counter = 0;
	while (str[i])
	{
		while (ft_is_a_sep(str[i], charset) && str[i])
			i++;
		j = i;
		while (!ft_is_a_sep(str[j], charset) && str[j])
			j++;
		if (str[i])
			tab[counter] = ft_copy_tab(str, i, j);
		counter++;
		i = j;
	}
	return (tab);
}
/*
int main(int argc, char **argv)
{
	int i = 0;
	char **tab;

	tab = ft_split(argv[1]," ,.");
	while (tab[i])
	{
		printf("chaine : %s\n", tab[i]);
		i++;
	}
}*/
