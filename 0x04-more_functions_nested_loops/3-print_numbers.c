#include "holberton.h"

/**
 * print_numbers - check the code for Holberton School students.
 * @n: The character to print
 * Return: Always 0.
 */

void print_numbers(void)
{
	int n;

		for (n = '0'; n <= '9'; n++)
		{
			_putchar(n);
		}
	_putchar('\n');
}
