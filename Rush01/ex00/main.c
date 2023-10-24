/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 17:40:17 by asaux             #+#    #+#             */
/*   Updated: 2023/07/23 21:15:59 by asaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

int	ft_putstr(char *str);

int	gridcheck(char *str);

int	possibility(char a, char b);

int	is_valid(char *str);

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		else
			i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		res = res * 10 + (str[i] - '0');
	return (sign * res);
}

int	*get_numbers(char *str)
{
	int	i;
	int	j;
	int	*tab;

	tab = malloc(sizeof(int) * 16);
	if (!(tab == malloc(sizeof(int) * 16)))
		return (0);
	i = -1;
	j = 0;
	while (str[++i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			tab[j++] = ft_atoi(str + i);
	}
	return (tab);
}

int	main(int argc, char *argv[])
{
	int	*entry;

	if (argc > 1 && is_valid(argv[1]) == 1)
	{
		if (gridcheck(argv[1]) == 1)
		{
			ft_putstr("Resolved\n");
			return (1);
		}
		if (gridcheck(argv[0]) == 0)
		{
			ft_putstr("Error\n");
			return (0);
		}
	}
	else
	{
		ft_putstr("Error\n");
		return (0);
	}
	entry = get_numbers(argv[1]);
}
