/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atchougo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:58:46 by atchougo          #+#    #+#             */
/*   Updated: 2021/09/16 22:08:54 by atchougo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	result;
	int	i;

	i = 0;
	result = 0;
	if (nb < 0)
		return (0);
	while (i < 46341)
	{
		result = i * i;
		if (result == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	printf("5 : %d\n",ft_sqrt(25));
	printf("4 : %d\n",ft_sqrt(16));
	printf("12 : %d\n",ft_sqrt(2147483645));
	printf("0 : %d\n",ft_sqrt(-6));
	printf("0 : %d\n",ft_sqrt(2147483646));
	printf("15000 : %d\n",ft_sqrt(2147483647));
}*/
