/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:08:42 by omoreno-          #+#    #+#             */
/*   Updated: 2023/05/17 13:09:19 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "atoli.h"

int	main(int argc, char const *argv[])
{
	long int	value;

	if (argc > 1)
	{
		for (int i = 1; i < argc; i++)
		{
			if (ft_atoli(argv[i], &value))
				printf("Argument in position %d is not a valid number\n", i);
			else
				printf("Argument in position %d is %0ld\n", i, value);
		}
	}
	else
		printf("Provide a string argument\n");
	return (0);
}
