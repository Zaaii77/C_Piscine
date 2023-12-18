/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwatelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 10:55:23 by lwatelle          #+#    #+#             */
/*   Updated: 2023/12/15 11:04:34 by lwatelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_comb2(void)
{
    int i;
    int j;

    i = 0;
    while (i < 99)
    {
        j = i + 1;
        while (j < 100)
        {        
            ft_putchar((i / 10) + '0');
            ft_putchar((i % 10) + '0');
            ft_putchar(' ');
            ft_putchar((j / 10) + '0');
            ft_putchar((j++ % 10) + '0');
            if (i != 98)
            {
                ft_putchar(',');
                ft_putchar(' ');
            }
        }
        i++;
    }
}