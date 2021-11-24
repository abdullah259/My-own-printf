#ifndef  PRINTF_H
# define PRINTF_H

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

void ft_hex(unsigned int h, char t);
int     ft_printf(const char *format, ...);
void    ft_putstr(char *s);
int     ft_putchar(char c);
void ft_foru(unsigned int n);
void ft_putnbr(int n);
void ft_hexp(unsigned int y);
#endif



