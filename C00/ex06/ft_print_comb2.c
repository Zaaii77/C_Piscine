#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putall(int a, int b)
{
    ft_putchar((a / 10) + '0');
    ft_putchar((a % 10) + '0');
    ft_putchar(' ');
    ft_putchar((b / 10) + '0');
    ft_putchar((b % 10) + '0');
    if (a != 98)
    {
        ft_putchar(',');
        ft_putchar(' ');
    }
}

void    ft_print_comb2(void)
{
    int a;
    int b;

    a = 0;
    while (a < 100)
    {
        b = a + 1;
        while (b != 100)
        {
            ft_putall(a, b);
            b++;
        }
        a++;
    }
}