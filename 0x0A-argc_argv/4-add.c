#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc : count
 * @argv : string
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	int j;
			for (i = 1; i < argc; i++)
			{
				for (j = 0; argv[i][j] != '\0'; j++)
				{
					if (argv[i][j] < 48 || argv[i][j] > 57)
					{
					printf("Error\n");
					return (1);

					}
				}

			sum += atoi(argv[i]);
			}
	printf("%d\n", sum);
	return (0);

}
