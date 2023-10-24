/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:16:13 by asaux             #+#    #+#             */
/*   Updated: 2023/07/31 10:27:50 by asaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*res;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	res = malloc(sizeof(int) * (max - min));
	if (res == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = res;
	while (min < max)
	{
		res[i] = min;
		min++;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int	main(void)
{
	int *range;

	printf("Warn: Any segfault will mean that 
	arrays are not correctly allocated\n");

	printf("5:%d\n", ft_ultimate_range(&range, 0, 5));
	printf("0, 1, 2, 3, 4 : %d, %d, %d, %d, %d\n", 
	range[0], range[1], range[2], range[3], range[4]);

	printf("0:%d\n", ft_ultimate_range(&range, 3, 3));

	printf("2:%d\n", ft_ultimate_range(&range, -1, 1));
	printf("-1, 0 : %d, %d", range[0], range[1]);
}*/
