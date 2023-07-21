#include "3-calc.h"

/**
 * get_op_func - function pointer
 * @s: operator by user
 * Return: pointer to function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", add_op},
		{"-", sub_op},
		{"*", mul_op},
		{"/", div_op},
		{"%", mod_op},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}

