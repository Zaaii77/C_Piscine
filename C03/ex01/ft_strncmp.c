int ft_strncmp(char *s1, char *s2, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (s1[i] && s2[i] && i < size - 1)
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        else
            i++;
    }
    return 0;
}