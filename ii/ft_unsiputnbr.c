#include "printf.h"

int ft_foru(unsigned int n,int k)
{
	if (n >= 10)
	{
		k = ft_foru(n / 10,k);
	}
	n = n % 10 + '0';
	k += ft_putchar(n);
	return (k);
}
