#include <stdio.h>

/**
 * get_op_func - is a function that verificate each function
 * @s: is a pointer that take the operator
 * Return: for the moment idk
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

	i = 0;

	while (i < 5)
	{
		if (*ops[i].op == *s)
		{
			return (ops[i].f);
		}
		i++;

	}

	return (NULL);
}
