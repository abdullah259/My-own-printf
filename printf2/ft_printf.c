#include "printf.h"

// static void ft_hex(unsigned int h, char t)
// {
//     char    *hex;

//     hex = "0123456789abcdef";
//     if (t == 'X')
//     {
//         hex = "0123456789ABCDEF";
//     }
//     if (h > 15)
//     {
//         ft_hex(h / 16,t);
//     }
//     write (1,&hex[h % 16],1);
// }

// static void ft_hexp(unsigned int y)
// {
//     char    *hex;

//     hex = "0123456789abcdef";
//     if (y > 15)
//     {
//         ft_hexp(y / 16);
//     }
//     write (1,&hex[y % 16],1);
// }

// static void ft_putnbr(int n)
// {
//     if (n == -2147483648)
// 	{
// 		write(1, "-2147483648", 11);
// 		return ;
// 	}
// 	else if (n < 0)
// 	{
// 		write(1, "-", 1);
// 		n *= -1;
// 	}
// 	if (n >= 10)
// 	{
// 		ft_putnbr(n / 10);
// 	}
// 	n = n % 10 + '0';
// 	write(1, &n, 1);
// }

// static void ft_foru(unsigned int n)
// {
// 	if (n >= 10)
// 	{
// 		ft_foru(n / 10);
// 	}
// 	n = n % 10 + '0';
// 	write(1, &n, 1);
// }

int     ft_printf(const char *format, ...)
{
    int i = 0;
    int *k;
    char ch;

    va_list apy;

    va_start(apy,format);
    
    while(format[i])
    {
        if (format[i] == '%')
        {
            i++;
            if(format[i] == 'c')
            {
                ch = va_arg(apy,int);
                ft_putchar(ch,k);
            }
            else if(format[i] == 's')
            {
                char *ptr;
                ptr = va_arg(apy,char *);
                ft_putstr(ptr,k);
            }
            else if(format[i] == 'i' || format[i] == 'd')
            {
                int g = va_arg(apy,int);
                ft_putnbr(g,k);
            }
            else if(format[i] == 'u')
            {
                unsigned int e = va_arg(apy,unsigned int);
                ft_foru(e,k);
            }
            else if(format[i] == '%')
            {
                ft_putchar('%',k);
            }
            else if (format[i] == 'x' || format[i] == 'X')
            {
                unsigned int he = va_arg(apy, unsigned int);
                ft_hex(he,format[i],k);
            }

            else if (format[i] == 'p')
            {
                unsigned int he = va_arg(apy, unsigned int);
                // write(1,"0x",2);
                ft_putchar('0',k);
                ft_putchar('x',k);
                ft_hexp(he);
            }
        }
        else
            // write(1,&format[i],1);
            ft_putchar(format[i],k);
        i++;
    }
    va_end(apy);
    return (k);
}

int main()
{
	ft_printf("%d\n", ft_printf("%d\n", 7876));
	printf("%d\n", printf("%d\n", 7876));
}
