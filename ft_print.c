#include "ft_printf.h"

int ft_print(const char *form, va_list ptr)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while(form[i])
	{
		if(form[i] == '%')
		{
			i++;
			count += checkprint(form[i], ptr);
		}
		else
		{
			write(1, &form[i], 1);
			count++;
		}
		i++;
	}
	return (count);
}
