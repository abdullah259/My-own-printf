#include "printf.h"

void     ft_putchar(char c, int *h)
{
    write(1,&c,1);
    h = h +1;
}
