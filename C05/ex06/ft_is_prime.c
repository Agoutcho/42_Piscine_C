/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atchougo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:45:17 by atchougo          #+#    #+#             */
/*   Updated: 2021/09/16 02:59:29 by atchougo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i <= ((nb / i)))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>

int main()
{
	printf("0 : %d\n", ft_is_prime(214747));
	printf("1 : %d\n", ft_is_prime(2147483647));
	printf("1 : %d\n", ft_is_prime(2147483647));
	printf("0 : %d\n", ft_is_prime(1));
	printf("0 : %d\n", ft_is_prime(0));
}
