/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 11:02:57 by asaux             #+#    #+#             */
/*   Updated: 2023/07/28 08:35:20 by asaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_checkbase(char *base, int base_len)
{
	int	i;
	int	j;

	i = 0;
	if (base[i] != '\0' && base_len > 1)
	{
		while (base[i] != '\0' && base[i] != '-' && base[i] != '+')
		{
			j = 0;
			while (base[j] != '\0' && (base[i] != base[j] || i == j))
				j++;
			if (j != base_len)
				return (0);
			i++;
		}
		if (i != base_len)
			return (0);
		return (1);
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	number;
	long int	lengh;

	number = nbr;
	lengh = 0;
	lengh = ft_strlen(base);
	if ((ft_checkbase(base, lengh)) == 1)
	{
		if (number < 0)
		{
			number = number * (-1);
			ft_putchar('-');
		}
		if (number >= lengh)
		{
			ft_putnbr_base(number / lengh, base);
			ft_putchar(base[(number % lengh)]);
		}
		else if (number < lengh)
			ft_putchar(base[number]);
	}
}

int     main(void)
{
        char deci[] = "0123456789";
        char hexa[] = "0123456789ABCDEF";
        char binaire[] = "01";
        char octale[] = "poneyvif";

        ft_putnbr_base(10000, binaire);
        return (0);
}

