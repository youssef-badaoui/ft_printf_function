
#include "ft_printf.h"

int puthex(int decimalnum)
{
  long quotient, remainder;
    int i, j = 0;
    char hexadecimalnum[100];
    quotient = decimalnum;
    while (quotient != 0)
    {
        remainder = quotient % 16;
        if (remainder < 10)
            hexadecimalnum[j++] = 48 + remainder;
        else
            hexadecimalnum[j++] = 55 + remainder;
        quotient = quotient / 16;
    }
    for (i = j; i >= 0; i--)
            write(1, &hexadecimalnum[i], 1);
    return (strlen(hexadecimalnum) + 2);
}

