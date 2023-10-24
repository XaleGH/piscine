/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 08:10:12 by asaux             #+#    #+#             */
/*   Updated: 2023/07/15 16:38:12 by asaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	line(int lengh, char f, char s, char t)
{
	int	l;

	l = 0;
	while (l < lengh)
	{
		if (l == 0)
			ft_putchar(f);
		else
		{
			if (l == lengh - 1)
				ft_putchar(t);
			else
				ft_putchar(s);
		}
		l++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	z;

	z = 0;
	if (x < 0)
		x = x / -1;
	if (y < 0)
		y = y / -1;
	while (z < y)
	{
		if (z == 0)
			line(x, '/', '*', '\\');
		else
		{
			if (z == y - 1)
				line(x, '\\', '*', '/');
			else
				line(x, '*', ' ', '*');
		}
		z++;
	}
}
