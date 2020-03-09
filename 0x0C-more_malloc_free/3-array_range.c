#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - prints buffer in hexa
 * @max: the address of memory to print
 * @min: the size of the memory to print
 * Return: pointer k
 */
int *array_range(int min, int max)
{
	int *k, result, i;

	result = max - min;

	if (min > max)
		return (0);
	k = malloc((result + 1) * sizeof(int));
	if (k == NULL)
		return (0);
	for (i = 0; i <= result; i++)
	{
		k[i] = min;
		min++;
	}
	return (k);
}
