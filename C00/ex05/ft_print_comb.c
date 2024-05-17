#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putcomb(int a, int b, int c)
{
    ft_putchar(a + '0');
    ft_putchar(b + '0');
    ft_putchar(c + '0');
    if (a == 7 && b == 8 && c == 9)
        return;
    write(1, ", ", 2);
    return;
}

void    ft_print_comb(void)
{
    int i;
    int j;
    int k;

    i = 0;
    while (i < 8)
    {
        j = i + 1;
        while (j < 9)
        {
            k = j + 1;
            while (k < 10)
                ft_putcomb(i, j, k++);
            j++;
        }
        i++;
    }
}