#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - check the code for Holberton School students.
 * @a : pointer
 * @size : size of array
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int i, mpositive = 0, mnegative = 0;

		for (i = 0; i < (size * size);)
		{
			mpositive = mpositive + a[i];
			i = i + size + 1;
		}

		for (i = 0; i < (size * size) - size;)
		{
			i = i + size - 1;
			mnegative = mnegative + a[i];
		}

	printf("%d, %d\n", mpositive, mnegative);
}
