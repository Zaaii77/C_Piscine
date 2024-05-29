int ft_is_prime(int nb)
{
    int i;

    i = 2;
    if (nb < 0)
        nb = -nb;
    if (nb == 0 || nb == 1)
        return (0);
    while (i < nb)
    {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int ft_find_next_prime(int nb)
{
    if (nb >= 2147483647 || nb < -2147483648)
        return (0);
    if (ft_is_prime(nb))
        return (nb);
    else
        if (nb < 0)
            ft_find_next_prime(nb - 1);
        else    
            ft_find_next_prime(nb + 1);
}