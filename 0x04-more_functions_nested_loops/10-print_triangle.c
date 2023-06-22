#include "main.h"

/**
 * print_triangle - prints a triangle
 * @dim: int
 * Return: 0
 */
void print_triangle(int dim)
{
	int i = 0, j, n = dim - 1;

	if (dim > 0)
	{
		for (; i < dim; i++)
		{
			for (j = 0; j < dim; j++)
			{
				if (j < n)
					_putchar(' ');
				else
					_putchar('#');
			}
			n--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
