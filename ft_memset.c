#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

static void ft_putnbr(int n)
{
    if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	n = n % 10 + '0';
	write(1, &n, 1);
}

static void ft_foru(int n)
{
    unsigned int a = n;
    if (a == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (a < 0)
	{
		write(1, "-", 1);
		a *= -1;
	}
	if (a >= 10)
	{
		ft_foru(a / 10);
	}
	a = a % 10 + '0';
	write(1, &a, 1);
}
int     ft_printf(const char *format, ...)
{
    int i = 0;
    int k = 0;
    char ch;
    int count = 0;
    va_list apy;

    va_start(apy,format);
    
    while (format[i])
    {
        if (format[i] == '%')
        {
            i++;
            if (format[i] == 'c')
            {
                ch = va_arg(apy,int);
                write(1,&ch,1);
                k++;
            }
            else if (format[i] == 's')
            {
                int j = 0;
                char *ptr;
                ptr = va_arg(apy,char *);
                while (ptr[j])
                {
                    write(1,&ptr[j],1);
                    ptr++;
                    k++;
                }
            }

            else if (format[i] == 'i' || format[i] == 'd')
            {
                int g = va_arg(apy,int);
                ft_putnbr(g);
            }
            
            else if (format[i] == 'u')
            {
                int e = va_arg(apy,int);
                ft_foru(e);
            }
            
            else if (format[i] == '%')
            {
                char t = '%';
                write(1,&t,1);
                k++;
            }
        }

        else
            write(1,&format[i],1);
	    k++;
        i++;
    }
    va_end(apy);
    return (k);
}


int main()
{
	ft_printf("%u\n",-88);
	printf("%u\n",-88);
}
