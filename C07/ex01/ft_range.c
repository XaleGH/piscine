/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 08:25:51 by asaux             #+#    #+#             */
/*   Updated: 2023/07/31 10:31:15 by asaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*string;
	int	i;

	i = 0;
	if (min >= max)
	{
		string = NULL;
		return (string);
	}
	string = malloc(sizeof(int) * (max - min));
	if (string == NULL)
		return (0);
	while (min < max)
	{
		string[i] = min;
		min++;
		i++;
	}
	return (string);
}
/*
#include <unistd.h>
#include <stdio.h>
int	main(void)
{
	int	*str;
	int	i;
	int	max;

	i = 0;
	max = 30;
	str = ft_range(-10, 20);
	
	while (i <  max)
	{
		printf("%d ", str[i]);
		i++;
	}
	return (0);
}*/
