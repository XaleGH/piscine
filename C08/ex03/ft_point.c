/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaux <asaux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 14:04:55 by asaux             #+#    #+#             */
/*   Updated: 2023/07/31 14:34:17 by asaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"

void    set_point(t_point *point)
{
    point->x = 42;
    point->y = 21;
}

int main(void)
{
    t_point     point;

    printf("%d\n", point.x);
    printf("%d\n", point.y);
    set_point(&point);
    printf("%d\n", point.x);
    printf("%d\n", point.y);
    return (0);
}