#include "printf.h"

void ft_hex(unsigned int h, char t, int *m)
{
    char    *hex;

    hex = "0123456789abcdef";
    if (t == 'X')
    {
        hex = "0123456789ABCDEF";
    }
    if (h > 15)
    {
        ft_hex(h / 16,t,&m);
    }
    // write (1,&hex[h % 16],1);
    ft_putchar(hex[h % 16],&m);
}
