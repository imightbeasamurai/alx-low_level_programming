#include <stdio.h>

/**
 * main - prints nums separated with comma
 * Retrun: 0
 */
int main(void)
{
	int n;

	for(n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
		putchar(',');
		putchar(' ');
		}
	}
}
