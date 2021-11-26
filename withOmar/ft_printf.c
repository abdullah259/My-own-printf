#include "printf.h"

int     ft_printf(const char *format, ...)
{
    int i = 0;
    int k = 0;
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
                k += ft_putchar(ch);
            }
            else if(format[i] == 's')
            {
                char *ptr;
                ptr = va_arg(apy,char *);
                k += ft_putstr(ptr);
            }
            else if(format[i] == 'i' || format[i] == 'd')
            {
                int g = va_arg(apy,int);
                k+= ft_putnbr(g,k);
            }
            else if(format[i] == 'u')
            {
                unsigned int e = va_arg(apy,unsigned int);
                k+=ft_foru(e,k);
            }
            else if(format[i] == '%')
            {
             	k += ft_putchar('%');
            }
            else if (format[i] == 'x' || format[i] == 'X')
            {
                unsigned int he = va_arg(apy, unsigned int);
                k+=ft_hex(he,format[i],k);
            }

            else if (format[i] == 'p')
            {
                unsigned long long int he = va_arg(apy, unsigned long long int);
                // write(1,"0x",2);
                k += ft_putchar('0');
                k += ft_putchar('x');
                k += ft_hexp(he,k);
            }
        }
        else
            // write(1,&format[i],1);
            k += ft_putchar(format[i]);
        i++;
    }
    va_end(apy);
    return (k);
}
