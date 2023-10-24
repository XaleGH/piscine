/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_writer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraverdy <lraverdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 16:11:43 by lraverdy          #+#    #+#             */
/*   Updated: 2023/07/30 22:47:39 by jverdier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inventory.h"

void    int_to_char(int num, char *result)
{
        int     length;
        int     temp;
        int     index;

        length = 0;
        temp = num;
        if (num == 0)
                result[length++] = '0';
        else
        {
                while (temp > 0)
                {
                        temp /= 10;
                        length++;
                }
                index = length - 1;
                while (num > 0)
                {
                        result[index--] = num % 10 + '0';
                        num /= 10;
                }
        }
        result[length] = '\0';
}

void    ft_format(int chunk_index, char *number)
{
        unsigned long   total;
        unsigned long   i;

        total = chunk_index * 3;
        number[0] = '1';
        i = 1;
        while (i <= total)
        {
                number[i] = '0';
                i++;
        }
}

void	write_coresp(char *number, char *coresp[])
{
	int	i;

	i = 0;
	while (coresp[i])
	{
		if (ft_strcmp(coresp[i], number) == 0)
		{
			ft_putstr(coresp[i]);
			break ;
		}
		i++;
	}
}

void	write_chunk(int chunk_index, char *coresp[])
{
	char	*number;

	number = NULL;
	if (chunk_index < 1)
		return ;
	ft_format(chunk_index, number);
	write_coresp(number, coresp);
	free(number);
}
