/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atchougo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:17:27 by atchougo          #+#    #+#             */
/*   Updated: 2021/09/16 22:15:08 by atchougo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (2);
	i = 2;
	while (i <= ((nb / i)))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}
/*
#include <stdio.h>

int main()
{
	printf("int max : %d\n", ft_find_next_prime(2147483647));
	printf("int max : %d\n", ft_find_next_prime(2147483647));
	printf("int max : %d\n", ft_find_next_prime(2147483647));
	printf("int max : %d\n", ft_find_next_prime(2147483647));
	printf("int max : %d\n", ft_find_next_prime(2147483647));
	printf("int max : %d\n", ft_find_next_prime(2147483647));
	printf("int max : %d\n", ft_find_next_prime(2147483647));
	printf("int max : %d\n", ft_find_next_prime(2147483647));
	printf("int max : %d\n", ft_find_next_prime(2147483647));
	printf("int min donc 2 : %d\n", ft_find_next_prime(-2147483648));
	printf("293 : %d\n", ft_find_next_prime(289));
	printf("97 : %d\n", ft_find_next_prime(97));
	printf("2 : %d\n", ft_find_next_prime(1));
	printf("2 : %d\n", ft_find_next_prime(2));
	printf("2 : %d\n", ft_find_next_prime(0));
}*/
