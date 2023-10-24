/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraverdy <lraverdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 11:05:36 by lraverdy          #+#    #+#             */
/*   Updated: 2023/07/30 23:20:18 by asaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inventory.h"

#include <stdio.h>

int	number_len(char **numbers)
{
	int	i;

	i = 0;
	while (numbers[i])
		i++;
	return (i);
}

void	malloc_ref(char **ref)
{
	int	i;

	i = 0;
	while (i < 33)
	{
		ref[i] = malloc(sizeof(char) * 1000);
		i++;
	}
}

void	put_references(char *ref[])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 20)
	{
		int_to_char(i, ref[i]);
		i++;
	}
	j = 20;
	while (j <= 100)
	{
		int_to_char(j, ref[i]);
		j += 10;
		i++;
	}
	ft_format(1, ref[i]);
	ft_format(2, ref[i + 1]);
	ft_format(3, ref[i + 2]);
}

int	check_dict(char **numbers)
{
	int		i;
	int		j;
	int		len;
	char	**references;

	references = malloc(1000 * sizeof(char *));
	if (references == NULL)
		return (0);
	len = number_len(numbers);
	malloc_ref(references);
	put_references(references);
	i = 0;
	while (references[i])
	{
		j = -1;
		while (numbers[j++])
		{
			if (ft_strcmp(references[i], numbers[j]) == 0)
				break ;
		}
		if (j == len)
			return (0);
		i++;
	}
	return (1);
}
