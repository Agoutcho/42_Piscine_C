/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atchougo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 13:15:14 by atchougo          #+#    #+#             */
/*   Updated: 2021/09/23 16:01:29 by atchougo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_zero_print(int i)
{
	if (i)
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	else
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 4 || !(ft_operator_is_ok(argv[2])))
		return (0);
	if (argv[2][0] == '+')
		ft_doop(ft_atoi(argv[1]), ft_atoi(argv[3]), &ft_addition);
	else if (argv[2][0] == '-')
		ft_doop(ft_atoi(argv[1]), ft_atoi(argv[3]), &ft_soustraction);
	else if (argv[2][0] == '*')
		ft_doop(ft_atoi(argv[1]), ft_atoi(argv[3]), &ft_multiplication);
	else if (argv[2][0] == '/')
	{
		if (ft_atoi(argv[3]) == 0)
			return (ft_zero_print(1));
		ft_doop(ft_atoi(argv[1]), ft_atoi(argv[3]), &ft_division);
	}
	else if (argv[2][0] == '%')
	{
		if (ft_atoi(argv[3]) == 0)
			return (ft_zero_print(0));
		ft_doop(ft_atoi(argv[1]), ft_atoi(argv[3]), &ft_modulo);
	}
}
