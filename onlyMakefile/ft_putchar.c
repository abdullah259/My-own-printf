#include "printf.h"

int     ft_putchar(char c)
{
    int k;

    k = 0;
    write(1,&c,1);
    k++;
    return (k);
}
