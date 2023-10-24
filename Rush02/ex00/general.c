/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraverdy <lraverdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 13:40:12 by jverdier          #+#    #+#             */
/*   Updated: 2023/07/30 17:28:32 by asaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inventory.h"

void	ft_putstr(char *str)
{
	int	box;

	box = 0;
	while (str[box] != '\0')
	{
		write(1, &str[box], 1);
		box++;
	}
	return ;
}

int	ft_strlen(char *str)
{
	int	box;

	box = 0;
	while (str[box] != '\0')
		box++;
	return (box);
}

int	ft_strcmp(char	*s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (1);
		else
			i++;
	}
	if ((s1[i] == '\0' && s2[i] != '\0') || (s2[i] == '\0' && s1[i] != '\0'))
		return (1);
	return (0);
}

char	*ft_atoa(char *str)
{
	int		i;
	int		j;
	char	*stack;

	i = 0;
	j = 0;
	stack = malloc (sizeof(char) * 40);
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			ft_putstr("Error, don't use sign !\n");
			return (0);
		}
	}
	while ((str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
	{
		stack[j] = str[i];
		j++;
		i++;
	}
	stack[j] = '\0';
	return (stack);
}

int	ft_intint(char *taba, char *tabl1)
{
	int	i;
	int	j;

	i = 0;
	while (tabl1[i] != '\0')
	{
		j = 0;
		while (taba[j] != '\0')
		{
			if (taba[i] == tabl1[j])
				return (j);
			j++;
		}
		i++;
	}
	return (-1);
}
