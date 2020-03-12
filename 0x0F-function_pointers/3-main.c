#include <stdio.h>
#include "3-calc.h"
#include <string.h>
#include <stdlib.h>

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

	if (!get_op_func(argv[2]) || argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	if (( *argv[2]== '/' || *argv[2] == '%') && argv[3] == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(argv[2])(num1, num2));
	return (0);
}
