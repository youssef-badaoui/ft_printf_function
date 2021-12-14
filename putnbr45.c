
#include "ft_printf.h"

static int	ft_lennum(int num)
{
	int		len;
	long int	n;

	n = num;
	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

int putnbr45(unsigned int n)
{
	unsigned int	nb;
	static int count = 0;

	nb = n;
	if (nb > 9)
	{
		putnbr45(nb / 10);
		putnbr45(nb % 10);
	}
	else
	{
		ft_putchar(nb + 48);
		count ++;
	}
}
