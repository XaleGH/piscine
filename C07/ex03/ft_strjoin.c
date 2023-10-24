/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 07:17:41 by asaux             #+#    #+#             */
/*   Updated: 2023/08/01 18:56:27 by asaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*strfinal;

	i = 0;
	strfinal = malloc(sizeof(strs) + 
			sizeof(char) * ((size * sizeof(sep) - 1) + 1));
	if (strfinal == NULL)
		return (0);
	if (size <= 0)
		return (strfinal);
	i = 0;
	while (i < size)
	{
		ft_strcat(strfinal, strs[i]);
		if (i < size - 1)
			ft_strcat(strfinal, sep);
		i++;
	}
	return (strfinal);
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	printf("./ex03/output___said___this___is___a___success :\n");
	printf("%s\n",  ft_strjoin(argc, argv, "___"));
}
