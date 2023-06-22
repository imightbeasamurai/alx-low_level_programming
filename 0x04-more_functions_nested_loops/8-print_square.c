#include "main.h"

/**
 * print_square - draws a square
 * @dim: int
 * Return: void
 */
void print_square(int dim)
{
	int row;
	int column;

	if (dim > 0)
	{
		for (row = 0; row < dim; row++)
		{
			for (column = 0; column < dim; column++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
