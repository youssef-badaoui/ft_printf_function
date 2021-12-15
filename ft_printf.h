#ifndef FT_PRINTF_H
#define FT_PRINTF_H


#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>

int ft_printf(const char *format, ...);
int ft_print(const char *form, va_list ptr);
int checkprint(const char form, va_list str);
int  putnbr45(unsigned int  n);
int puthex(long int  nb);
int ft_printadr(unsigned long long adr);
int ft_putstr(char *s);
int puthexup(unsigned int n);
char *ft_itoa(int n);
int ft_putchar(char c);
int ft_toupper(int c);

#endif
