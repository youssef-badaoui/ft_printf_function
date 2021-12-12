#ifndef FT_PRINTF_H
#define FT_PRINTF_H


#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int ft_print(const char *form, va_list ptr);
int checkprint(const char form, va_list str);
void putstr45(int n);
int puthex(int decimalnum);
int ft_printadr(unsigned long long adr);
int ft_putstr(char *s);
int puthexup(int n);
char *ft_itoa(int n);
int ft_putchar(char c);
int ft_toupper(int c);

#endif
