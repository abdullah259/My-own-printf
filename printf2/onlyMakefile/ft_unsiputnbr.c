#include "printf.h"

void ft_foru(unsigned int n)
{
	if (n >= 10)
	{
		ft_foru(n / 10);
	}
	n = n % 10 + '0';
	ft_putchar(n);
}