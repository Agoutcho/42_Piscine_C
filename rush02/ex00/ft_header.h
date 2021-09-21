/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:49:47 by nradal            #+#    #+#             */
/*   Updated: 2021/09/19 23:40:02 by atchougo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

char	*ft_recup_dico(char *path_to_dico);

typedef	struct	s_nbr
{
	char	*nb;
	char	*name;
}				t_nbr;

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
//#include <stdio.h>
#define PATH "numbers.dict"

int		ft_strlen(char *str);
void	ft_printstr(char *str);
void	ft_putchar(char c);
char	*ft_cmp(char *str, t_nbr *s_tab);
char	*ft_cmp2(char *str, t_nbr *s_tab);
int		ft_is_over_ui(char *str1);
void	ft_putstr(char *str);
int		ft_strnum(char *str);
int		ft_str_is_ok(char *str);
char	*ft_recup_dico(char *path_to_dico);
char	*ft_fill_nbr(char *dico);
int		ft_taille_name(char *dico, int *debut);
char	*ft_fill_name(char *dico, int *fin);
t_nbr	*ft_struct_fill(char *dico);
char	*ft_str_minus_one(char *str);
int		ft_is_argv_not_ok(int argc, char **argv);
void	ft_printft(char *str, t_nbr *s_tab, int div, int var);
void	ft_resolution(char *str, t_nbr *s_tab);
char	*ft_decal(char *dico);


#endif
