/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 11:24:38 by asaux             #+#    #+#             */
/*   Updated: 2023/07/16 18:24:40 by asaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *tab1, int *tab2)
{
	int	temp;

	temp = 0;
	temp = *tab1;
	*tab1 = *tab2;
	*tab2 = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	swap = 1;
	while (swap == 1)
	{
		swap = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				ft_swap(&tab[i], &tab[i + 1]);
				swap = 1;
			}
			i++;
		}
		i = 0;
	}
}
/*
void	printff(int *tab, int size)
{
	int i = 0;

	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}

int	main(void)
{
	int tab[8] = {144, 26, 85, 45, 965, 584, 42, 677};

	printff(tab, 8);
	ft_sort_int_tab(&tab[0], 8);
	printf("\n");
	printff(tab, 8);
	return (0);
}*/
