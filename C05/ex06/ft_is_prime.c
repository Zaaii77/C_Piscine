int ft_is_prime(int nb)
{
    int i;

    i = 2;
    if (nb == 0 || nb == 1)
        return (0);
    if (nb < 0)
        nb = -nb;
    while (i < nb)
    {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}

