/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atchougo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 20:53:40 by atchougo          #+#    #+#             */
/*   Updated: 2021/09/14 21:06:42 by atchougo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
/*

#include <stdio.h>

int main()
{
	printf("8:%d\n",ft_iterative_factorial(8));
	printf("5:%d\n",ft_iterative_factorial(5));
	printf("12:%d\n",ft_iterative_factorial(12));
	printf("-12:%d\n",ft_iterative_factorial(-12));
	printf("0:%d\n",ft_iterative_factorial(0));
}*/
