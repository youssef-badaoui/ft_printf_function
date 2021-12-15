
#include "ft_printf.h"
static int ft_adrlen(unsigned long long adr)
{
	int count;

	count = 0;
	while(adr > 0)
	{
		adr /= 16;
		count++;
	}
	return(count);
}

static int printnil(void)
{
	write(1, "0x0", 3);
	return (3);
}

int	ft_printadr(unsigned long long  adr)
{
	unsigned long long n;
	int d;
	int j;
	int size;
	char *hexnum;


	if(adr == 0)
		return(printnil());
	size = ft_adrlen(adr);
	j = 0;
	hexnum = malloc(size + 1);
	hexnum[j++] = 0;
   	n = adr;
	while (n > 0)
    {
       	d = n % 16;
		if (d < 10)
			hexnum[j++] = 48 + d;
		else
			hexnum[j++] = 87 + d;
	    n = n / 16;
	}
	write(1,"0x",2);

    while(hexnum[--j] != 0)
		write(1, &hexnum[j], 1);
	free(hexnum);
  	return (size + 2);
}
/*
int main()
{
	int n = 13577737;
	ft_printadr(n);
	printf("\n%p", &n);
}*/
