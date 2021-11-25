#include "printf.h"

void    ft_putstr(char *s,int *h)
{
    int j;

    j = 0;
    while (s[j])
    {
        ft_putchar(s[j],&h);
        j++;
    }
}
