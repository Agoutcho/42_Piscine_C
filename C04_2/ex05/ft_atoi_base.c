/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atchougo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 21:40:05 by atchougo          #+#    #+#             */
/*   Updated: 2021/09/23 22:53:44 by atchougo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_get_index(char c, char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (str[index] == c)
			return (index);
		index++;
	}
	return (-1);
}

int	ft_check_in_base(char c, char *base)
{
	while (*base)
	{
		if (*base == c)
			return (1);
		base++;
	}
	return (0);
}

int	ft_atoi(char *str, char *base, int base_len)
{
	int	sign;
	int	nb;
	int	i;

	nb = 0;
	i = 0;
	sign = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (ft_check_in_base(str[i], base) && str[i])
	{
		nb = nb * base_len + ft_get_index(str[i], base);
		i++;
	}
	nb *= sign;
	return (nb);
}

int	checkerror(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (base[0] == 0 || base[1] == 0)
		return (1);
	while (base[i])
	{
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		if (base[i] == 43 || base[i] == 45 || (base[i] < 33 && base[i] > 0))
			return (1);
		i++;
		j = i + 1;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_len;
	int	result;

	base_len = 0;
	while (base[base_len])
		base_len++;
	if (checkerror(base))
		return (0);
	return (result = ft_atoi(str, base, base_len));
}
/*
int main(int ac, char **av)
{
	printf("%d\n",ft_atoi_base(av[1], av[2]));
}
*/
