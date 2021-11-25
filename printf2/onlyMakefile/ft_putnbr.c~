#include "printf.h"

void ft_putnbr(int n)
{
    if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
        // ft_putchar("-2147483648");
		return ;
	}
	else if (n < 0)
	{
		// write(1, "-", 1);
        ft_putchar("-");
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	n = n % 10 + '0';
	ft_putchar(n);
}