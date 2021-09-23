/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atchougo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 22:18:47 by atchougo          #+#    #+#             */
/*   Updated: 2021/09/22 19:35:27 by atchougo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sign;
	int	nb;
	int	i;

	nb = 0;
	i = 0;
	sign = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	nb *= sign;
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
