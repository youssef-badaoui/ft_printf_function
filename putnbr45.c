
#include "ft_printf.h"

int putnbr45(unsigned int n)
{
		unsigned int 	nb;
//	int count;

	nb = n;
	if (nb > 9)
	{
		putnbr45(nb / 10);
		putnbr45(nb % 10);
	}
	else
		ft_putchar(nb + 48);
	return 1;
}
