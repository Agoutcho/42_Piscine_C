/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atchougo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 00:56:30 by atchougo          #+#    #+#             */
/*   Updated: 2021/09/13 19:27:07 by atchougo         ###   ########lyon.fr   */
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
#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);


int	main(void)
{
	char s1a[] = "This is OK for now";
	char s2a[] = "OK";
	char s1b[] = "This is OK for now";
	char s2b[] = "OK";
	char s3a[] = "Same";
	char s4a[] = "";
	char s3b[] = "Same";
	char s4b[] = "";
	char s5a[] = "Shorter";
	char s6a[] = "Than";
	char s5b[] = "Shorter";
	char s6b[] = "Than";

	printf("%s:%s\n", ft_strstr(s1a, s2a), strstr(s1b, s2b));
	printf("%s\n", strcmp(s1a, s1b) == 0 && strcmp(s2a, s2b) == 0 ? "Success" : "Fail");
	printf("%s:%s\n", ft_strstr(s3a, s4a), strstr(s3b, s4b));
	printf("%s\n", strcmp(s3a, s3b) == 0 && strcmp(s4a, s4b) == 0 ? "Success" : "Fail");
	printf("%s:%s\n", ft_strstr(s5a, s6a), strstr(s5b, s6b));
	printf("%s\n", strcmp(s5a, s5b) == 0 && strcmp(s6a, s6b) == 0 ? "Success" : "Fail");
}
/*
int main()
{
	printf("%s",ft_strstr("chouchouter", "chout"));
	printf("\n%s",strstr("chouchouter", "chout"));
	printf("\n%s",ft_strstr("chouchouter", "chot"));
	printf("\n%s",strstr("chouchouter", "chot"));
}
*/
