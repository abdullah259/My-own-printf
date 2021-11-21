#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>


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
            else if (format[i] == 'i')
            {
                int g = va_arg(apy,int);
                write(1,&g,1);
                k++;
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
	ft_printf("%%\n");
	printf("%%\n");
}
