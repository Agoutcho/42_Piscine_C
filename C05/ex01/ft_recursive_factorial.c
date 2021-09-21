/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atchougo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 21:08:03 by atchougo          #+#    #+#             */
/*   Updated: 2021/09/15 15:32:16 by atchougo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>

int main()
{
	printf("40320:%d\n",ft_recursive_factorial(8));
	printf("120:%d\n",ft_recursive_factorial(5));
	printf("479001600:%d\n",ft_recursive_factorial(12));
	printf("0:%d\n",ft_recursive_factorial(-12));
	printf("1:%d\n",ft_recursive_factorial(0));
}
*/
