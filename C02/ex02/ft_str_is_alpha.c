/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 12:30:17 by asaux             #+#    #+#             */
/*   Updated: 2023/07/19 08:45:24 by asaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || (str[i] > 'Z' 
				&& str[i] < 'a') || str[i] > 'z')
			return (0);
		else
			i++;
	}
	return (1);
}
/*
int	main(void)
{
	char *string = "hfgfgdg";
	int a;

	a=0;
	a = ft_str_is_alpha(string);
	printf("%d", a);
}*/
