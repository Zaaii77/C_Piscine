#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    if (str)
        while (str[i])
            ft_putchar(str[i++]);
}

int ft_strlen(char **str)
{
    int i;

    i = 0;
    if (str)
        while (str[i])
            i++;
    return (i);
}

int main(int argc, char **argv)
{
    int i;

    i = ft_strlen(argv) - 1;
    while (i > 0)
    {
        ft_putstr(argv[i]);
        i--;
        if (i != 0)
            ft_putchar('\n');
    }
    return (0);
}