#include "printf.h"

void ft_foru(unsigned int n,int *h)
{
	if (n >= 10)
	{
		ft_foru(n / 10,&h);
	}
	n = n % 10 + '0';
	ft_putchar(n,&h);
}
