#include "printf.h"

int 	ft_putnbr(int n,int k)
{
    if (n == -2147483648)
	{
		ft_putstr( "-2147483648");
		return (11);
	}
	else if (n < 0)
	{
        k+= ft_putchar('-');
		n *= -1;
	}
	if (n >= 10)
	{
		k += ft_putnbr(n / 10,k);
	}
	n = n % 10 + '0';
	k += ft_putchar(n);
	return (k);
}
