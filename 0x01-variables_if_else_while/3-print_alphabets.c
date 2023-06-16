#include <stdio.h>

/**
 * main - prints a to z then A to Z then \n
 * Return: 0
 */
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
