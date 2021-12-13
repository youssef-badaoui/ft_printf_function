
#include "ft_printf.h"

int checkprint(const char form, va_list ptr)
{
	int count;
	
	if(form == 'c')
		count = ft_putchar(va_arg(ptr, int));
	if(form == 's')
		count = ft_putstr(va_arg(ptr, char*));
	if(form == 'p')
		count = ft_printadr(va_arg(ptr, unsigned long long));
	if(form == 'd')
		count = ft_putstr(ft_itoa(va_arg(ptr, int)));
	if(form == 'i')
		count = ft_putstr(ft_itoa(va_arg(ptr, unsigned int)));
	if(form == 'u')
		count = putnbr45(va_arg(ptr, unsigned int));
	if(form == 'x')
		count = puthex(va_arg(ptr, unsigned int));
	if(form == 'X')
		count = puthexup(va_arg(ptr, unsigned int));
	if(form == '%')
		write(count = 1, &form, 1);
	return (count);
}


