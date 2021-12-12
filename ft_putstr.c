
#include"ft_printf.h"

int ft_putstr(char *s)
{
	int		i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			write(1, &s[i], 1);
			i++;
		}
	}
	return (strlen(s));
}
