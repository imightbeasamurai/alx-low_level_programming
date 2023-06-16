#include <stdio.h>

int main(void)
{
	int a;

	a = 97;
	while (a < 123)
	{
		putchar(a);
		a++;
	}
	a = 65;
	while (a < 91)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
