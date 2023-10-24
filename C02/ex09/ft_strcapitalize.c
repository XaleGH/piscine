/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:35:40 by asaux             #+#    #+#             */
/*   Updated: 2023/07/18 08:26:52 by asaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - ('a' - 'A');
	while (str[++i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') && (str[i - 1] >= '0' 
				|| (str[i - 1] <= '9' && str[i - 1] >= 'A') 
				|| (str[i - 1] <= 'Z' && str[i - 1] >= 'a') 
				|| str[i - 1] <= 'z'))
		{
			str[i] = str[i] + ('a' - 'A');
		}
		if ((str[i] >= 'a' && str[i] <= 'z') && (str[i - 1] < '0' 
				|| (str[i - 1] > '9' && str[i - 1] < 'A') 
				|| (str[i - 1] > 'Z' && str[i - 1] < 'a') 
				|| str[i - 1] > 'z'))
		{
			str[i] = str[i] - ('a' - 'A');
		}
	}
	return (str);
}
/*
int	main(void)
{
	char string[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char *a;

	a = ft_strcapitalize(string);
	printf("%s", a);
	return (0);
}*/
