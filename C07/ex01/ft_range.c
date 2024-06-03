#include <stdlib.h>

int *ft_range(int min, int max)
{
    int size;
    int *tab;
    int i;

    if (min >= max)
        return NULL;
    size = max - min;
    tab = malloc(sizeof(int) * size);
    i = 0;
    if (!tab)
        return NULL;
    while (min < max)
    {
        tab[i] = min;
        min++;
        i++;
    }
    return (tab);
}