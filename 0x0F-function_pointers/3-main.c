#include "3-calc.h"

/**
 * main - program that do operations
 * @argc: int
 * @argv: char *
 *
 * Return: 0
 */
int main(int ac, char *av[])
{
	int av1, av2, res;
	char o;
	int (*func)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	av1 = atoi(av[1]);
	av2 = atoi(av[3]);

	func = get_op_func(av[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	o = *av[2];

	if ((o == '/' || o == '%') && av2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	res = func(av1, av2);

	printf("%d\n", res);

	return (0);
}
