#include "holberton.h"
/**
 * reverse_array - check the code for Holberton School students.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int i;

		for (i = 0; i < (n / 2); i++)
		{
			tmp = a[i];
			a[i] = a[n - i - 1];
			a[n - i - 1] = tmp;


		}

}
