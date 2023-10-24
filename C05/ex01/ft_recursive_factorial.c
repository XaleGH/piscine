/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 08:47:51 by asaux             #+#    #+#             */
/*   Updated: 2023/07/23 09:26:55 by asaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb == 0)
		return (1);
	if (nb >= 0)
	{
		res = nb * ft_recursive_factorial(nb - 1);
		return (res);
	}
	return (0);
}
/*
#include <stdio.h>
int     main(void)
{
        printf("0:%d\n", ft_recursive_factorial(-10));
        printf("0:%d\n", ft_recursive_factorial(-1));
        printf("1:%d\n", ft_recursive_factorial(0));
        printf("1:%d\n", ft_recursive_factorial(1));
        printf("3628800:%d\n", ft_recursive_factorial(10));
        printf("6:%d\n", ft_recursive_factorial(3));
}*/
