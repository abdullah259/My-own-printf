#include "printf.h"

int ft_hexp(unsigned long long int y,int k)
{
    char    *hex;

    hex = "0123456789abcdef";
    if (y > 16)
    {
        k = ft_hexp(y / 16,k);
    }
    // write (1,&hex[y % 16],1);
    k += ft_putchar(hex[y % 16]);
    return (k);
}

