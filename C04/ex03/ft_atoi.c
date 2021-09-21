/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atchougo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 22:18:47 by atchougo          #+#    #+#             */
/*   Updated: 2021/09/14 10:55:58 by atchougo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	is_negatif(char *str)
{
	int	i;
	int	neg;

	i = 0;
	neg = 0;
	while (str[i])
	{
		if (str[i] == '-')
			neg++;
		i++;
	}
	if (neg % 2 == 1)
		return (1);
	else
		return (0);
}

int	is_space(char *str)
{
	int	i;

	i = 0;
	while (str[i] < 33 && str[i] > 0)
		i++;
	while (str[i] == 43 || str[i] == 45)
		i++;
	return (i);
}

int	ft_atoi(char *str)
{
	int	negative_bool;
	int	nb;
	int	i;

	nb = 0;
	negative_bool = is_negatif(str);
	i = is_space(str);
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	if (negative_bool)
		nb = -nb;
	return (nb);
}
/*
#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
printf("42:%d\n", ft_atoi("  \n  42t4457"));
printf("-42:%d\n", ft_atoi(" --+-42sfs:f545"));
printf("0:%d\n", ft_atoi("\0 1337"));
printf("0:%d\n", ft_atoi("-0"));
printf("0:%d\n", ft_atoi(" - 1 3 2 5 6 3 2 1 6 7"));
printf("-1325632167:%d\n", ft_atoi("-1325632167"));
printf("-100:%d\n", ft_atoi("-100"));
printf("min:%d\n", ft_atoi("\t---+2147483648"));
printf("max:%d\n", ft_atoi("\v2147483647"));
}
*/
