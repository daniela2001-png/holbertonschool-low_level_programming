#include "holberton.h"

/**
 * print_line - check the code for Holberton School students.
 * @n: number of lines
 *
 */

void print_line(int n)
{
	int y;

	for (y = 1 ; y <= n ; y++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
_putchar('\n');
}
