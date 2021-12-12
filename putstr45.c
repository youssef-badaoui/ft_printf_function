
#include "ft_printf.h"

void putstr45(int n)
{
	long 	nb;
//	int count;

	nb = n;
	if (nb < 0)
		nb *= -1;
	if (nb > 9)
	{
		putstr45(nb / 10);
		putstr45(nb % 10);
	}
	else
		putchar(nb + 48);
}
