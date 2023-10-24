/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 21:02:45 by asaux             #+#    #+#             */
/*   Updated: 2023/07/20 09:41:52 by asaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	k = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	while (src[j] != '\0')
		j++;
	if (i != size)
	{
		while (src[k] && i + k < size - 1)
		{
			dest[i + k] = src[k];
			k++;
		}
		dest[i + k] = '\0';
	}
	return (i + j);
}
/*
int main(void)
{
    char dest[16] = "salut";
    char src[] = "ca va";

    printf("%d", ft_strlcat(dest, src, 16));
}*/
