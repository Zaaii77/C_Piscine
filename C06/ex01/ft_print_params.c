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

int main(int argc, char **argv)
{
    int i;

    i = 1;
    while (argv[i])
    {
        ft_putstr(argv[i]);
        i++;
        if (argv[i])
            ft_putchar('\n');
    }
    return (0);
}