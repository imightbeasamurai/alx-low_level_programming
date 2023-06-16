#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - generates a random num, then tells if its positive or negative
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		puts("is zero");
	else if (n > 0)
		puts("is positive");
	else
		puts("is negative");
	return (0);
}
