#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct op - struct op
 *
 * @op: operator
 * @f: function
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int add_op(int a, int b);
int sub_op(int a, int b);
int mul_op(int a, int b);
int div_op(int a, int b);
int mod_op(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif

