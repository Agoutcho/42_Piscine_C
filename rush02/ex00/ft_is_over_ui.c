/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_over_ui.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 19:13:08 by nradal            #+#    #+#             */
/*   Updated: 2021/09/19 21:56:55 by nradal           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

/* compare un char, a char ui(unsgined int max) si il
est inferieur ou egal return 0, sinon return 1. */
int	ft_is_over_ui(char *str1)
{
	int		i;
	char	ui[] = "4294967295";

	i = 0;
	while (str1[i])
		i++;
	if (i < 10)
		return (0);
	else if (i > 10)
		return (1);
	i = 0;
	while (str1[i] && ui[i] && (str1[i] == ui[i]))
		i++;
	if ((str1[i] - ui[i]) > 0)
		return (1);
	return (0);
}

void	ft_putstr(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		++i;
	write(1, str, i);
}

int	ft_strnum(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

int	ft_str_is_ok(char *str)
{
	if (ft_strnum(str))
	{
		if (!ft_is_over_ui(str))
			return (1);
	}
	return (0);
}
