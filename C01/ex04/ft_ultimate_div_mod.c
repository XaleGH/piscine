/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:34:51 by asaux             #+#    #+#             */
/*   Updated: 2023/07/16 07:52:35 by asaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}
/*int     main(void)
{
        int a;
        int b;

        a = 10;
        b = 2;

        printf("%d %d",a ,b);
        ft_ultimate_div_mod(&a, &b);
        printf("%d %d",a ,b);
        return(0);
}*/
