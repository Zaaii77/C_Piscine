int ft_str_is_printable(char *str)
{
    int i;

    i = 0;
    while (str[i])
        if (!(str[i] >= 32 && str[i] <= 127))
        {
            i++;
            return 0;
        }
    return 1;
}