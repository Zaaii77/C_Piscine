int ft_isspace(char c)
{
    if (c == '\t' || c == '\r' || c == '\n' || c == '\v' || c == '\f' || c == ' ')
        return 1;
    return 0;
}

int ft_atoi(char *str)
{
    int i;
    int sign;
    int nb;

    nb = 0;
    sign = 1;
    i = 0;
    while (ft_isspace(str[i]))
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -sign;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        nb = nb * 10 + str[i] - '0';
        i++;
    }
    return (nb * sign);
}