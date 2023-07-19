#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * get_op_func - Select the operation.
 * @s : The operator.
 * Return: Pointer to the right operation.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i  =  0;
	while (i < 5)
	{
		if (s[0] == ops[i].op[0] && strlen(s) == 1)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
