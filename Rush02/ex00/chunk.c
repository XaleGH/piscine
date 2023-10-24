/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 11:45:11 by asaux             #+#    #+#             */
/*   Updated: 2023/07/30 23:35:10 by jverdier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inventory.h"

char	**chunk(char *taba, int unit)
{
	char	**chunk;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 2;
	chunk = malloc ((sizeof(char *) * (unit + 2) / 3) + 1);
	while (taba[j] != '\0')
	{
		chunk[i] = malloc ((sizeof(char) * 3) + 1);
		while (k >= 0 && taba[j++] != '\0')
			chunk[i][k--] = taba[unit-- - 1];
		if (k-- == 1)
			chunk[i][1] = '\0';
		if (k == 0)
			chunk[i][0] = '\0';
		chunk[i][3] = '\0';
		i++;
		k = 2;
	}
	chunk[j] = (void*)0;
	return (chunk);
}

void	if_ten(char *taba, char **coresp)
{
	int		j;
	char	value[3];

	value[0] = '1';
	value[2] = '\0';
	j = -1;
	while (j++ <= 9)
	{
		if (taba[2] == '0' + j)
		{
			value[1] = j + '0';
			write_coresp(value, coresp);
		}
	}
}

void	check_ten(char *taba, char **coresp)
{
	char	value[3];

	value[2] = '\0';
	if (taba[1] == '1')
		if_ten(taba, coresp);
	if (taba[1] >= '2' && taba[1] <= '9')
	{
		value[0] = taba[1];
		value[1] = '0';
		write_coresp(value, coresp);
		if (taba[2] >= '1' && taba[2] <= '9')
		{
			value[0] = taba[2];
			value[1] = '\0';
			write_coresp(value, coresp);
		}
	}
}
