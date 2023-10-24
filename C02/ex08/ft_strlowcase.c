/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:19:43 by asaux             #+#    #+#             */
/*   Updated: 2023/07/19 13:11:02 by asaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strlowcase(char *str)
{
	int	i;
	int	diff;

	i = 0;
	diff = 'a' - 'A';
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + diff;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char string[] = "ZfdfGHJYRfdfFDGA";
	char *a;

	a = ft_strlowcase(string);
	printf("%s", a);
	return (0);
}*/
