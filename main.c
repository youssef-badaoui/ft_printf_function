#include <stdio.h>

int main()
{
	int count;
	write(count = 1, "ok",2);
	printf("\n%s", &count);
}
