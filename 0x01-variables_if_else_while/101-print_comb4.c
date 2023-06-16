#include <stdio.h>

/**
 * main - prints possible different combs of 3 digits
 * Return: 0
 */
int main(void)
{
	int n, m, b;

	for (n = 48; n < 58; n++)
	{
		for (m = 49; m < 58; m++)
		{
			for (b = 50; b < 58; b++)
			{
				if (b > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(b);
					if (n != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
