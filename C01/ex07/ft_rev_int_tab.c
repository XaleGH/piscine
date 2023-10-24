/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 08:27:09 by asaux             #+#    #+#             */
/*   Updated: 2023/07/16 18:23:03 by asaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	temp = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}
/*
void	printff(int *tab)
{
	int i = 0;

	while (i< 8)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}

int	main(void)
{
	int tab[8] = {12, 65, 25, 41, 58, 95, 45, 53};
	
	printff(tab);
	ft_rev_int_tab(&tab[0], 8);
	printf("\n");
	printff(tab);
}*/
