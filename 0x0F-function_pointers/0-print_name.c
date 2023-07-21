#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: char *
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
