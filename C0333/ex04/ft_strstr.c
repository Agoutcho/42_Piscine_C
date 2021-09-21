/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atchougo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 00:56:30 by atchougo          #+#    #+#             */
/*   Updated: 2021/09/13 17:54:04 by atchougo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	find(char *str, char *to_find, int i)
{
	int	j;

	j = 0;
	while (to_find[j])
	{
		if (!(str[i + j] == to_find[j]))
			return (0);
		j++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		if (str[i] == to_find[0] && find(str, to_find, i))
			return (str + i);
		i++;
	}
	return (0);
}
