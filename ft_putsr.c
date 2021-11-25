#include "printf.h"

void    ft_putstr(char *s)
{
    int j;

    j = 0;
    while (s[j])
    {
        ft_putchar(s[j]);
        j++;
        s++;
    }
}