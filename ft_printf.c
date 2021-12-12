#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
	va_list ptr;
	int	count;

	va_start(ptr, format);
	count = ft_print(format, ptr);
	va_end(ptr);
	return (count);
}
/*int main()
{
	int i = 79;
	int j = -373;
	char c = 'k';
	char h = 's';
	char str[] = "ok!";
	char str2[] = "";
	ft_printf("%d\n",ft_printf("%p %p",i, c));
	printf("%d" ,printf("%p %p", i,c));
}*/
