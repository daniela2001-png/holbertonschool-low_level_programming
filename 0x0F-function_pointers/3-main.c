#include <stdio.h>
#include "calc.h"

/**
 * main - Struct op
 * @argc: is a counter
 * @argv: is a name of string
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	operador = get_op_func(argv[2][0]);

	if (!operador)
	{
		printf("Error\n");
		exit(99);
	}

	if ((operador == '/' || operador == '%') && argv[3] == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("d\n", get_op_func(argv[2])(num1, num2));
	return (0);
}