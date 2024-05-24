int char_is_upcase(char c)
{
    if (c >= 'A' && c <= 'Z')
        return 1;
    else
        return 0;
}

char    *ft_strlowcase(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (char_is_upcase(str[i]))
        {
            str[i] += 32;
            i++;
        }
        else
            i++;
    }
    return (str);
}