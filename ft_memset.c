#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>


int     ft_printf(const char *format, ...)
{
    int i = 0;
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
                // write(1,&i,1);
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
                }
                // write(1,&i,1);
            }
        }
        else
            write(1,&format[i],1);

        i++;
    }
    va_end(apy);
    return (i);
}


int main()
{
    ft_printf("this is %c%s/n",'a',"bdullah");
}
