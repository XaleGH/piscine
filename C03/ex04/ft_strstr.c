/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 18:34:12 by asaux             #+#    #+#             */
/*   Updated: 2023/07/20 15:37:06 by asaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!to_find[0])
		return (str);
	while (str[i] != '\0')
	{
		while (to_find[j] && str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
		j = 0;
	}
	return (NULL);
}
/*
int	main(void)
{
	char str1[] = "allo allo ici lordi";
	char str2[] = "ici";

	printf("%s", ft_strstr(str1, str2));
	return (0);
}*/
