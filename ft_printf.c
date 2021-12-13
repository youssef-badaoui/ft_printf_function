
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

int main()
{
//	int i = 79468463;
	int j = -365659959;
//	char c = 'k';
//	char h = 's';
//	char str[] = "ok!";
//	char str2[] = "";
	printf("\n%d",ft_printf("\n %u", j));
	printf("\n%d" ,printf("\n %u", j));
}
