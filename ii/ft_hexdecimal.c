#include "printf.h"

int     ft_hex(unsigned int h, char t,int k)
{
    char    *hex;

    hex = "0123456789abcdef";
    if (t == 'X')
    {
        hex = "0123456789ABCDEF";
    }
    if (h > 15)
    {
        k = ft_hex(h / 16,t,k);
    }
    // write (1,&hex[h % 16],1);
    k += ft_putchar(hex[h % 16]);
    return (k);
}
