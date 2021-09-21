/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_minus_one.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 15:55:04 by nradal            #+#    #+#             */
/*   Updated: 2021/09/19 23:52:51 by atchougo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

char	*ft_str_minus_one(char *str)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = 1;
	while (str[i])
		i++;
	i -= 1;
	dest = malloc(i * sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (str[j])
	{
		dest[i] = str[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main()
{
	printf("%s\n",ft_str_minus_one("123456"));
}*/
