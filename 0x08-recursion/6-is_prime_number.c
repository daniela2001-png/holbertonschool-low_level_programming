#include "holberton.h"
/**
 * prime - check the code for Holberton School students.
 * @n:integer
 * @x:integer
 * Return: integer
 */
int prime(int n, int x)
{
	if (n < 2)
		return (0);
	else if (n == x)
		return (1);
	else if (n % x == 0)
		return (0);
	else
		return (prime(n, x + 1));
}

/**
 * is_prime_number - theck the code for Holberton School students.
 * @n: variable
 * Return: my new function
 */

int is_prime_number(int n)
{
	return (prime(n, 2));
}
