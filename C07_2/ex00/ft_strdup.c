/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atchougo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 02:11:23 by atchougo          #+#    #+#             */
/*   Updated: 2021/09/20 23:01:25 by atchougo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		src_len;
	char	*ptr;

	src_len = 0;
	while (src[src_len])
		src_len++;
	ptr = malloc(sizeof(*ptr) * src_len + 1);
	if (!ptr)
		return (NULL);
	src_len = 0;
	while (src[src_len])
	{
		ptr[src_len] = src[src_len];
		src_len++;
	}
	ptr[src_len] = '\0';
	return (ptr);
}
