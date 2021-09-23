/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atchougo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 00:28:11 by atchougo          #+#    #+#             */
/*   Updated: 2021/09/23 00:32:58 by atchougo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	counter;

	counter = 0;
	i = 0;
	while (i < length)
	{
		if ((*f)(tab[i]) != 0)
			counter++;
		i++;
	}
	return (counter);
}
