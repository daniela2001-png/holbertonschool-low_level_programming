#include "holberton.h"
/**
 * print_sign - check the code for Holberton School students.
 * @n: The character to print
 * Return: Always 0.
 */
int print_sign(int n)
{
		while (n > 0)
		{
			_putchar('+');
			return (1);
		}

		while (n == 0)
		{
			_putchar('0');
			return (0);
		}

			while (n < 0)
			{
				_putchar('-');
				return (-1);
			}
		return (0);
}
