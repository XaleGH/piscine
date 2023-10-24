/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 07:18:38 by asaux             #+#    #+#             */
/*   Updated: 2023/07/31 10:29:08 by asaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*string;
	int		i;

	i = 0;
	string = malloc(sizeof(char) * ft_strlen(src) + 1);
	while (src[i] != '\0')
	{
		string[i] = src[i];
		i++;
	}
	string[i] = '\0';
	return (string);
}
/*
#include <stdio.h>
int	main(void)
{
	char	src[] = "salut salut";

	printf("%s", ft_strdup(src));
}*/
