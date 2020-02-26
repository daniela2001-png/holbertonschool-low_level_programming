#include "holberton.h"
/**
 * factorial - check the code for Holberton School students.
 * @n : integer
 * Return: integer
 */
int factorial(int n)
{
		if (n == 0 || n == 1)
		{
			return (1);
		}

	if (n < 0)
		{
		return (-1);
		}

	else
		{
			return (n * factorial(n - 1));
		}
}
