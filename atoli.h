/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoli.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:59:25 by omoreno-          #+#    #+#             */
/*   Updated: 2023/05/17 13:12:51 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATOLI_H
# define ATOLI_H

typedef struct s_atoli_data
{
	int			overf;
	long int	res;
	int			i;
	int			phase;
	int			sign;
	int			dig_count;
}	t_atoli_data;

void	ft_atoli_ph0(const char *s, t_atoli_data *pd);
void	ft_atoli_ph1(const char *s, t_atoli_data *pd);
void	ft_atoli_ph2(const char *s, t_atoli_data *pd);
void	ft_atoli_ph3(const char *s, t_atoli_data *pd);
void	ft_atoli_ph4(const char *s, t_atoli_data *pd);
void	ft_atoli_ph5(const char *s, t_atoli_data *pd);
int		ft_atoli(const char *s, long int *li);

#endif