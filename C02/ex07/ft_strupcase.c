int char_is_lowercase(char c)
{
    if (c >= 'a' && c <= 'z')
        return 1;
    return 0;
}

char    *ft_strupcase(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (char_is_lowercase(str[i]))
        {
            str[i] -= 32;
            i++;
        }
        else
            i++;
    }
    return (str);
}