/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraverdy <lraverdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 13:15:04 by jverdier          #+#    #+#             */
/*   Updated: 2023/07/30 23:21:45 by asaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inventory.h"

void	manage_file(int argc, char *argv[], char **numbers, char **coresp)
{
	if (argc == 2)
	{
		if (!master_dict("numbers.dict", numbers, coresp))
		{
			ft_putstr(DICT_ERROR);
			free(numbers);
			free(coresp);
			return ;
		}
	}
	else
	{
		if (!master_dict(argv[1], numbers, coresp))
		{
			ft_putstr(DICT_ERROR);
			free(numbers);
			free(coresp);
			return ;
		}
	}
	return ;
}

void	int_vars(char **numbers, char **coresp, int argc, char **argv)
{
	int	i;

	numbers = malloc(BUFFER_SIZE * sizeof(char *));
	if (numbers == NULL)
	{
		ft_putstr("Error ! (Malloc)\n");
		return ;
	}
	coresp = malloc(BUFFER_SIZE * sizeof(char *));
	if (coresp == NULL)
	{
		ft_putstr("Error ! (Malloc)\n");
		free(numbers);
		return ;
	}
	i = 0;
	while (i < BUFFER_SIZE)
	{
		coresp[i] = malloc(sizeof(char) * 2000);
		numbers[i] = malloc(sizeof(char) * 2000);
		i++;
	}
	manage_file(argc, argv, numbers, coresp);
}

char	**manage_chunk(int argc, char **argv)
{
	char	*str;
	char	**str2;

	if (argc == 2)
	{
		str = ft_atoa(argv[1]);
		str2 = chunk(str);
		free(str);
		return (str2);
	}
	else
	{
		str = ft_atoa(argv[2]);
		str2 = chunk(str);
		free(str);
		return (str2);
	}
}

void	free_memory(char **numbers, char **coresp, char **chunk)
{
	int	i;

	i = 0;
	while (i < BUFFER_SIZE)
	{
		free(numbers[i]);
		free(coresp[i]);
		i++;
	}
	free(numbers);
	free(coresp);
	free(chunk);
}

int	main(int argc, char **argv)
{
	char	**numbers;
	char	**coresp;
	char	**chunk;
	int		results;

	numbers = 0;
	coresp = NULL;
	numbers = NULL;
	if (argc > 3 || argc < 2)
		return (ft_putstr("Error\n"), 1);
	int_vars(numbers, coresp, argc, argv);
	chunk = manage_chunk(argc, argv);
	results = ft_link_right(chunk, numbers, coresp);
	free_memory(numbers, coresp, chunk);
	return (0);
}
