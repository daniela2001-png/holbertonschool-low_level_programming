#include "holberton.h"

/**
 * print_square - check the code for Holberton School students.
 * @size : type size square
 *
 */
void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (a = 1; a <= size; a++)
 	{
		for (b = 1; b <= size; b++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
}
