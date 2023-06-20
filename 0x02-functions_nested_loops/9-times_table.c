#include "main.h"
/**
 * times_table -  prints the 9 TT, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int n, a, d;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (a = 1; a <= 9; a++)
		{
			d = (n * a);
		if ((d / 10) > 0)
		{
			_putchar((d / 10) + '0');
		}
		else
		{
			_putchar(' ');
		}
			_putchar((d % 10) + '0');
		if (a < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
		_putchar('\n');
	}
}
