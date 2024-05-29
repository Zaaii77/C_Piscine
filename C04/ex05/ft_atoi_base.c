int ft_isspace(char c)
{
    if (c == '\t' || c == '\r' || c == '\n' || c == '\v' || c == '\f' || c == ' ')
        return 1;
    return 0;
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    if (str)
        while (str[i])
            i++;
    return (i);
}

int ft_check_base(char *str)
{
    int i;
    int j;

    i = 0;
    if (ft_strlen(str) <= 1)
        return 0;
    while (str[i])
    {
        if (str[i] == '-' || str[i] == '+' || ft_isspace(str[i]))
            return 0;
        j = i + 1;
        while (str[j])
        {
            if (str[i] == str[j])
                return 0;
            j++;
        }
        i++;
    }
    return 1;
}

int value_from_base(char c, char *base)
{
    int i;

    i = 0;
    while (base[i])
    {
        if (c == base[i])
            return i;
        i++;
    }
    return -1;
}

int ft_atoi_atoi_base(char *str, char *base)
{
    int i;
    int sign;
    int nb;

    nb = 0;
    sign = 1;
    i = 0;
    if (ft_check_base(base))
    {
        while (ft_isspace(str[i]))
            i++;
        while (str[i] == '-' || str[i] == '+')
        {
            if (str[i] == '-')
                sign = -sign;
            i++;
        }
        while (value_from_base(str[i], base) != -1)
            nb = nb * ft_strlen(base) + value_from_base(str[i++], base);
        return (nb * sign);
    }
    return 0;
}