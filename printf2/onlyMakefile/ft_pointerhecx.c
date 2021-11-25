#include "printf.h"

void ft_hexp(unsigned long long int y)
{
    char    *hex;

    hex = "0123456789abcdef";
    if (y > 16)
    {
        ft_hexp(y / 16);
    }
    write (1,&hex[y % 16],1);
}

