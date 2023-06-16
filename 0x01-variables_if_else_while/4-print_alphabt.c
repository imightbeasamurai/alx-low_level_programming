#include <stdio.h>

/**
 * main - print alphabets without e and q
 * Return: 0
 */
int main(void)
{
	int a;

	a = 97;
	while (a < 123)
	{
		if (a == 101)
			a = 102;
		else if (a == 113)
			a = 114;
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
