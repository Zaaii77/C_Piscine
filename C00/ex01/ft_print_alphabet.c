/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwatelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 09:55:38 by lwatelle          #+#    #+#             */
/*   Updated: 2023/12/15 10:26:09 by lwatelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
void    ft_print_alphabet(void)
{
    char c;
    
    c = 'a';
    while (c <= 'z')
    {
        ft_putchar(c);
        c++;
    }
}