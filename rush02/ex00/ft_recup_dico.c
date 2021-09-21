/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recup_dico.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 16:21:49 by atchougo          #+#    #+#             */
/*   Updated: 2021/09/19 23:40:22 by atchougo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

char	*ft_recup_dico(char *path_to_dico)
{
	int		i;
	char	buffer[2];
	int		fd;
	int		counter;
	char	*tab;
	int		ret;

	counter = 0;
	i = 0;
	fd = open(path_to_dico, O_RDONLY);
	if (fd == -1)
		return (0);
	while (read(fd, buffer, 1))
		counter++;
	tab = malloc(sizeof(*tab) * (counter + 1));
	if (!tab)
		return (0);
	close(fd);
	fd = open(PATH, O_RDONLY);
	if (!fd)
		return (0);
	ret = read(fd, tab, counter);
	tab[ret] = '\0';
	close (fd);
	return (tab);
}

