#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putchar_hexa(char c)
{
    char    *base;

    base = "0123456789abcdef";

    ft_putchar(base[c / 16]);
    ft_putchar(base[c % 16]);
}

void    ft_putstr_non_printable(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 32 && str[i] < 127)
            ft_putchar(str[i]);
        else
        {
            ft_putchar('\\');
            ft_putchar_hexa(str[i]);
        }
        i++;
    }
}