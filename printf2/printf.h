#ifndef  PRINTF_H
# define PRINTF_H

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

void ft_hex(unsigned int h, char t,int *m);
int     ft_printf(const char *format, ...);
void    ft_putstr(char *s, int *h);
void     ft_putchar(char c, int *k);
void ft_foru(unsigned int n, int *h);
void ft_putnbr(int n, int *h);
void ft_hexp(unsigned int y);
#endif



