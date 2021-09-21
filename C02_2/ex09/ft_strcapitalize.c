/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atchougo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 01:46:05 by atchougo          #+#    #+#             */
/*   Updated: 2021/09/07 22:51:34 by atchougo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	is_ok(char c)
{
	if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
	{
		if (!(c >= '0' && c <= '9'))
		{
			return (1);
		}
	}
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	str = ft_strlowcase(str);
	while (str[i])
	{
		if (i == 0 && str[i] > 96 && str[i] < 123)
			str[i] -= 32;
		else if (is_ok(str[i - 1]) && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*
**#include <stdio.h>
**int main()
**{
**	char *tabi;
**	char tab[]="sdkjf 4fdSS4199,44a55664doD, +f+f+FF=og0) (f";
**	printf("avant :%s ", tab);
**	tabi = ft_strcapitalize(tab);
**	printf("\napres :%s ", tabi);
**}
**/
