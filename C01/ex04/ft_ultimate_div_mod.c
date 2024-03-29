/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwatelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 14:58:08 by lwatelle          #+#    #+#             */
/*   Updated: 2024/02/16 15:01:28 by lwatelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_ultimate_div_mod(int *a, int *b)
{
    int mod;
    int div;
    
    div = *a / *b;
    mod = *a % *b;
    *a = div;
    *b = mod;
}
