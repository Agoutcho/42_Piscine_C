/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_rush.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 21:46:41 by nradal            #+#    #+#             */
/*   Updated: 2021/09/19 23:52:47 by atchougo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_printft(char *str, t_nbr *s_tab, int div, int var)
{
			ft_printstr(ft_cmp(str, s_tab));
			ft_putchar(' ');
			if (var)
			{
				ft_printstr(s_tab[28 + div].name);
				ft_putchar(' ');
			}
			//printf("ici");
}

void	ft_resolution(char *str, t_nbr *s_tab)
{
	int	div;
	int	mod;
	int	str_len;

	str_len = ft_strlen(str);
	if (!str[0])
		return;
	div = str_len / 3;
	mod = str_len % 3;
	//while (str[0] != '0')
		if (mod == 0)
			ft_printft(str, s_tab, 0, 1);
		else if (mod == 1)
			ft_printft(str, s_tab, div, 1);
		else if (mod == 2)
			ft_printft(str, s_tab, 0, 0);
:q
	return (ft_resolution(ft_str_minus_one(str), s_tab));
}

char	*ft_decal(char *dico)
{
	while(*dico != '\n')
		dico++;
	dico++;
	return (dico);
}
