/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atchougo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:35:28 by atchougo          #+#    #+#             */
/*   Updated: 2021/09/15 15:57:51 by atchougo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
int main()
{
	printf("55 : %d\n",ft_fibonacci(10));
	printf("-1 : %d\n",ft_fibonacci(-11));
	printf("1 : %d\n",ft_fibonacci(2));
	printf("987 : %d\n",ft_fibonacci(16));
}*/
