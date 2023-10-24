/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraverdy <lraverdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 14:38:37 by jverdier          #+#    #+#             */
/*   Updated: 2023/07/30 23:22:22 by jverdier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inventory.h"

int	chunk_len(char **chunk)
{
	int	len;

	len = 0;
	while (chunk[len])
		len++;
	return (len);
}

void	ft_verif_unit(int i, char **coresp, char **chunk, int chunk_size)
{
	if (i == 2 && chunk[chunk_size][i] != '0')
	{
		ft_putstr(&chunk[chunk_size][i]);
		write_coresp("100", coresp);
	}
	else if (i == 1 && chunk[chunk_size][i] != '0')
		check_ten(chunk[chunk_size], coresp);
	else if (i == 0 && chunk[chunk_size][i] != '0')
	{
		ft_putstr(&chunk[chunk_size][i]);
		write_chunk(chunk_size, coresp);
	}
	return ;
}

int	ft_link_right(char **chunk, char **coresp)
{
	int	i;
	int	chunk_size;

	chunk_size = chunk_len(chunk);
	while (chunk_size >= 0)
	{
		i = 0;
		while (chunk[chunk_size][i] != '\0')
		{
			ft_verif_unit(i, coresp, chunk, chunk_size);
			i++;
		}
		chunk_size--;
	}
	return (0);
}
