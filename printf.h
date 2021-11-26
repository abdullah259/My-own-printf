#ifndef  PRINTF_H
# define PRINTF_H

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

int 	ft_hex(unsigned int h, char t,int k);
int     ft_printf(const char *format, ...);
int    ft_putstr(char *s);
int     ft_putchar(char c);
int 	ft_foru(unsigned int n,int k);
int 	ft_putnbr(int n,int k);
int 	ft_hexp(unsigned long long int y,int k);
#endif



