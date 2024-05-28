void    *ft_strlowcase(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
}

int ft_is_alphanum(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
        return 1;
    else
        return 0;
}

char    *ft_strcapitalize(char *str)
{
    int i;

    i = 0;
    ft_strlowcase(str);
    while (str[i])
    {
        if (!(ft_is_alphanum(str[i - 1])) && (str[i] >= 'a' && str[i] <= 'z'))
            str[i] -= 32;
        i++;
    }
    return (str);
}