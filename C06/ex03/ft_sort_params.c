#include <unistd.h>

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    if (str)
        while (str[i])
        {
            write(1, &str[i], 1);
            i++;
        }

}

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}

void    ft_sort_params(int argc, char **argv)
{
    int i;
    int j;
    char *tmp;

    i = 1;
    while (i < argc)
    {
        j = i + 1;
        while (j < argc)
        {
            if (ft_strcmp(argv[i], argv[j]) > 0)
            {
                tmp = argv[i];
                argv[i] = argv[j];
                argv[j] = tmp;
            }
            j++;
        }
        i++;
    }
}

int main(int argc, char **argv)
{
    int i;

    i = 1;
    ft_sort_params(argc, argv);
    while (i < argc)
        ft_putstr(argv[i++]);
    return (0);
}