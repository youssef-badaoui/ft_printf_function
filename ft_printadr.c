
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

int	ft_printadr(unsigned long long  adr)
{
	unsigned long long n, d;
	int i, j = 0;
	char hexnum[ft_adrlen(adr)];
 
    	n = adr;
	while (n != 0)
    	{
        	d = n % 16;
		if (d < 10)
			hexnum[j++] = 48 + d;
	        else
			hexnum[j++] = 55 + d;
	        n = n / 16;
	    }
 
	    // display integer into character
	    for (i = j; i >= 0; i--)
        	    printf("%c", hexnum[i]);
	    return 0;

}
int main()
{
	ft_printadr(11);
}
