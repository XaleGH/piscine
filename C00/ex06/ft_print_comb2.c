/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 08:14:44 by asaux             #+#    #+#             */
/*   Updated: 2023/07/13 12:13:51 by asaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	f;
	int	s;

	f = 0;
	while (f <= 98)
	{
		s = f + 1 ;
		while (s <= 99)
		{
			ft_putchar(f / 10 + '0');
			ft_putchar(f % 10 + '0');
			ft_putchar(' ');
			ft_putchar(s / 10 + '0');
			ft_putchar(s % 10 + '0');
			if (f != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			s++;
		}
		f++;
	}
}
