#include "holberton.h"
/**
 * _pow_recursion - check the code for Holberton School students.
 * @x : integer base
 * @y : power of x
 * Return: x^y
 */
int _pow_recursion(int x, int y)
{

		if (y < 0)
		{
			return (-1);
		}

		if (y == 0)
		{
			return (1);
		}

	else
		{

			return (x * _pow_recursion(x, y - 1));
		}

}
