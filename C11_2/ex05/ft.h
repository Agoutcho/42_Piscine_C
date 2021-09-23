/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atchougo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 13:04:20 by atchougo          #+#    #+#             */
/*   Updated: 2021/09/23 15:13:28 by atchougo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <unistd.h>

int		ft_addition(int a, int b);
int		ft_soustraction(int a, int b);
int		ft_multiplication(int a, int b);
int		ft_division(int a, int b);
int		ft_modulo(int a, int b);
void	ft_doop(int v1, int v2, int (*f)(int val1, int val2));
int		ft_atoi(char *str);
int		ft_operator_is_ok(char *str);
void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_putcharp(unsigned int	*str, int i);
void	ft_putnbr(int nb);

#endif
