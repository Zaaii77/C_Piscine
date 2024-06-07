#include <stdlib.h>

int ft_strslen(char **strs, int size, char *sep)
{
    int i;
    int j;
    int len;
    int sep_len;

    sep_len = 0;
    len = 0;
    i = 0;
    while (sep[sep_len])
        sep_len++;
    while (i < size)
    {
        j = 0;
        while (strs[i][j])
        {
            j++;
            len++;
        }
        if (i < size - 1)
            len += sep_len;
        i++;
    }
    return (len);
}

char    *ft_strcat(char *strs, char *sep)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (strs[i])
        i++;
    while (sep[j])
    {
        strs[i + j] = sep[j];
        j++;
    }
    strs[i + j] = '\0';
    return (strs);
}

char    *ft_strjoin(char **strs, int size, char *sep)
{
    int total_len;
    int i;
    char    *result;

    if (size <= 0)
    {
        result = (char *)malloc(1);
        return (result);
    }
    total_len = ft_strslen(strs, size, sep);
    i = 0;
    result = (char *)malloc(sizeof(char) * total_len + 1);
    if (!result)
        return NULL;
    while (i < size)
    {
        result = ft_strcat(result, strs[i++]);
        if (i < size)
            result = ft_strcat(result, sep);
        if (i == size)
            result = ft_strcat(result, "\0");
    }
    return (result);
}
/*
#include <stdio.h>
int main(void)
{
    char    *strs[] = {
        "Hello",
        "Tout",
        "Le",
        "Monde",
    };
    char    *sep = "...";
    int size = 4;
    char    *result;

    result = ft_strjoin(strs, size, sep);
    printf("%s\n", result);
    free(result);
    return (0);
}*/