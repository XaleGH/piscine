/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 13:29:20 by asaux             #+#    #+#             */
/*   Updated: 2023/07/25 15:36:10 by asaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	j = 1;
	while (argv[j] && j < argc -1)
	{
		if (ft_strcmp(&argv[j][0], &argv[j + 1][0]) > 0)
		{
			ft_swap(&argv[j], &argv[j + 1]);
			j = 1;
		}
		else
			j++;
	}
	i = 0;
	j = 1;
	while (argv[j])
	{
		while (argv[j][i])
			write(1, &argv[j][i++], 1);
		write(1, "\n", 1);
		i = 0;
		j++;
	}
	return (0);
}
