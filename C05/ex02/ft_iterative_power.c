int ft_iterative_power(int nb, int power)
{
    int i;

    i = power;
    if (power < 0)
        return (0);
    if (nb == 0 && power == 0)
        return (1);
    while (i > 1)
    {
        nb *= power;
        i--;
    }
}