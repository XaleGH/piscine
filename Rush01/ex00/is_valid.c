/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 15:02:57 by asaux             #+#    #+#             */
/*   Updated: 2023/07/23 21:17:27 by asaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (0);
}

int	is_valid(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			if (!(str[i] >= '1' && str[i] <= '4'))
				return (0);
		}
		if (i % 2 == 1)
		{
			if (str[i] != ' ')
				return (0);
		}
		i++;
	}
	return (1);
}

int	possibility(char a, char b)
{
	if ((a == '1' && b == '4') || (a == '4' && b == '1'))
		return (1);
	if ((a == '1' && b == '3') || (a == '3' && b == '1'))
		return (1);
	if ((a == '1' && b == '2') || (a == '2' && b == '1'))
		return (1);
	if ((a == '2' && b == '2'))
		return (1);
	if ((a == '2' && b == '3') || (a == '3' && b == '2'))
		return (1);
	return (0);
}

int	gridcheck(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 8;
	while (j <= 30)
	{
		if ((i == 0 && j == 8) || (i == 2 && j == 10) || (i == 4 && j == 12)
			|| (i == 6 && j == 14) || (i == 16 && j == 24)
			|| (i == 18 && j == 26) || (i == 20 && j == 28)
			|| (i == 22 && j == 30))
		{
			if (possibility(str[i], str[j]) == 0)
				return (0);
		}
		i++;
		j++;
	}
	return (1);
}
