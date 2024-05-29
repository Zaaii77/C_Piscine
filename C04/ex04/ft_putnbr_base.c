#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int ft_check_base(char *str)
{
    int i;
    int j;

    i = 0;
    if (ft_strlen(str) <= 1)
        return 0;
    while (str[i])
    {
        if (str[i] == '-' || str[i] == '+')
            return 0;
        j = i + 1;
        while (str[j])
        {
            if (str[i] == str[j])
                return 0;
            j++;
        }
        i++;
    }
    return 1;
}

void    ft_putnbr_base(int nbr, char *base)
{
    long    i;
    long    base_len;

    
    i = nbr;
    base_len = ft_strlen(base);
    if (ft_check_base(base))
    {    
        if (i < 0)
        {
            ft_putchar('-');
            i = -i;
        }
        if (i >= base_len)
        {
            ft_putnbr_base(i / base_len, base);
            ft_putnbr_base(i % base_len, base);
        }
        else
            ft_putchar(base[i]);
    }
}