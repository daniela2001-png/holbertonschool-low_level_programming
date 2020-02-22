#include "holberton.h"
/**
 * print_number - check the code for Holberton School students.
 * @n: integer
 * Return: Always 0.
 */
void print_number(int n)
{

	unsigned int x = n;

	if (n < 0)
	{
		x = x * -1;
		_putchar('-');
	}
	if (x > 9)
	{
		print_number(x / 10);
	}
	_putchar((x % 10) + '0');
}
