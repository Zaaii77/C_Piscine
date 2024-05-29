int ft_sqrt(int nb)
{
    int max_int;
    int i;

    max_int = 2147483647;
    i = 2;
    if (nb == 1 || nb == 0)
        return (nb);
    while (i * i != nb)
    {
        if (i >= max_int / 2)
            return (0);
        i++;
    }
    return (i);
}