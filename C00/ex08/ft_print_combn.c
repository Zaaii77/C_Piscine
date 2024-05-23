#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    print_tab(int *tab, int size)
{
    int i;

    i = 0;
    while(i < size)
        ft_putchar(tab[i++] + '0');
}
