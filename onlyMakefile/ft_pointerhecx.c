#include "printf.h"

void ft_hexp(unsigned int y)
{
    char    *hex;

    hex = "0123456789abcdef";
    if (y > 15)
    {
        ft_hexp(y / 16);
    }
    write (1,&hex[y % 16],1);
}