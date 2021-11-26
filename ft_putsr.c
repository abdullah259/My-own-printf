#include "printf.h"

int    ft_putstr(char *s)
{
    int j;

    j = 0;
    while (s[j])
    {
        ft_putchar(s[j]);
        j++;
    }
    return(j);
}