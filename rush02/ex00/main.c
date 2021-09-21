/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 09:57:34 by nradal            #+#    #+#             */
/*   Updated: 2021/09/19 23:37:17 by atchougo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	ft_is_argv_not_ok(int argc, char **argv)
{
	if (argc < 2 || argc > 3)
	{
		ft_putstr("Error\n");
		return (1);
	}
	if (argc == 2)
	{
		if (!ft_str_is_ok(argv[1]))
		{
			ft_putstr("Error\n");
			return (1);
		}
	}
	else
	{
		if (!ft_str_is_ok(argv[2]))
		{
			ft_putstr("Error\n");
			return (1);
		}
	}
	return (0);
}


int	main(int argc, char **argv)
{
	char	*dico;
	t_nbr	*parsed_dico;

	if (ft_is_argv_not_ok(argc, argv))
		return (0);
	else if (argc == 2)
	{
		dico = ft_recup_dico(PATH);
		parsed_dico = ft_struct_fill(dico);
		//printf("%s",parsed_dico[2].name);
		ft_resolution(argv[1],parsed_dico);
	}
	else
	{
		dico = ft_recup_dico(PATH);
		parsed_dico = ft_struct_fill(dico);
		ft_resolution(argv[2],parsed_dico);
	}
	return (0);
}
