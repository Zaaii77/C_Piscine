int ft_iterative_factorial(int nb)
{
    int result;

    result = nb;
    if (nb == 0)
        return (1);
    while (nb > 1)
    {
        result = result * (nb - 1);
        nb--;
    }
    return (result);
}