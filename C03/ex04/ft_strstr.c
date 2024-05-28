char    *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (*to_find == '\0')
        return (str);
    while (str[i])
    {
        while (to_find[j] && to_find[j] == str[i])
        {
            j++;
            i++;
            if (to_find[j] == '\0')
                return (&str[i - j]);
        }
        j = 0;
        i++;
    }
    return (0);
}