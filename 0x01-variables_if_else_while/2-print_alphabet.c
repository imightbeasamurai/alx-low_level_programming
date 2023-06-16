#include <stdio.h>

/**
 * main - print from a to z
 * Return: 0
 */
int main()
{
	int a = 97;
	int i = 0;
	while (a < 123)
	{
		putchar(a);
		a = a + 1;
	}
	return (0);
}
