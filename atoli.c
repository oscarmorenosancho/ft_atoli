/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoli.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 09:20:39 by omoreno-          #+#    #+#             */
/*   Updated: 2023/05/17 13:09:37 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "atoli.h"

void	ft_atoli_ph5(const char *s, t_atoli_data *pd)
{
	while (s[pd->i] && ft_is_whitespace(s[pd->i]))
		pd->i++;
	if (s[pd->i])
		pd->overf = 1;
}

int	ft_atoli(const char *s, long int *li)
{
	t_atoli_data	d;

	if (!s || !li)
		return (1);
	ft_memset(&d, 0, sizeof(d));
	d.sign = 1;
	while (s[d.i] && !d.overf)
	{
		if (d.phase == 0)
			ft_atoli_ph0(s, &d);
		if (d.phase == 1 && !d.overf)
			ft_atoli_ph1(s, &d);
		if (d.phase == 2 && !d.overf)
			ft_atoli_ph2(s, &d);
		if (d.phase == 3 && !d.overf)
			ft_atoli_ph3(s, &d);
		if (d.phase == 4 && !d.overf)
			ft_atoli_ph4(s, &d);
		if (d.phase == 5 && !d.overf)
			ft_atoli_ph5(s, &d);
	}
	*li = d.res;
	return (d.overf);
}
