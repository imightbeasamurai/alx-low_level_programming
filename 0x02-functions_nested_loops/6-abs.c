#include "main.h"

/**
 * _abs - compute the absolute value
 * @n: int to be computed
 * Return: absolute value of @n
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
