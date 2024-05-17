#include <unistd.h>

void    ft_print_rever_alphabet(void)
{
    char    z;

    z = 'z';
    while(z > ('a' - 1))
    {
        write(1, &z, 1);
        z--;
    }
}