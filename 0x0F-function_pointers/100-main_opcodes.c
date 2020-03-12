#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that contain the number of bytes
 * @argc: is a counter
 * @argv: is a vector
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int num1;
	int i = 0;

	unsigned char *c;
	c = (unsigned char *)&main;

	num1 = atoi(argv[1]);

	for (; argv[1][i]; i++)
	{
		if (argv[1][i] >= 48 && argv[1][i] <= 57)

			continue;

		else
			printf("Error\n");
		exit(1);

	}


	if (num1 <= 0)
	{
		printf("Error\n");
			exit(2);
	}

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}


	for (i = 0; i < num1; i++)
	{

		printf("%02hhx ", c[i]);
	}
	printf("\n");
	return (0);
}
