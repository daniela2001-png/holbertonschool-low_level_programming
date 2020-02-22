#include "holberton.h"
/**
 * print_number - check the code for Holberton School students.
 * @n: integer
 * Return: Always 0.
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	if (n > 9)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
