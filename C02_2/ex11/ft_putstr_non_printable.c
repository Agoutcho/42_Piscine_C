/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atchougo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 01:35:35 by atchougo          #+#    #+#             */
/*   Updated: 2021/09/08 03:08:02 by atchougo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hexa_to_char(unsigned char c)
{
	unsigned char	decimal;
	unsigned char	unite;

	decimal = c / 16;
	if (decimal > 9 && decimal < 16)
	{
		decimal = decimal + 'a' - 10;
		write(1, &decimal, 1);
	}
	else if (decimal < 10 && decimal >= 0)
	{
		decimal = decimal + '0';
		write(1, &decimal, 1);
	}
	unite = c % 16;
	if (unite > 9 && unite < 16)
	{
		unite = unite + 'a' - 10;
		write(1, &unite, 1);
	}
	else if (unite < 10 && unite >= 0)
	{
		unite = unite + '0';
		write(1, &unite, 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((unsigned char)str[i] < 32 || (unsigned char)str[i] > 126)
		{
			write(1, "\\", 1);
			hexa_to_char((unsigned char)str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
/*
**int main ()
**{
**	ft_putstr_non_printable("Coucou\ntu vas bien ?");
**}
**/
