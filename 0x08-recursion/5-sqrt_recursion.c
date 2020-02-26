#include "holberton.h"
/**
 * aux -new function
 * @x : is a root of n
 * @n : integer
 * Return: Always 0.
 */
int aux(int n, int x)
{
	if (n == 0 || n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else if (x * x > n)
		return (-1);
	else if (x * x == n)
		return (x);
	else
		return (aux(n, x + 1));

}

/**
 * _sqrt_recursion - is a function that stored my other function
 * @n: integer
 * Return:  function aux
 */
int _sqrt_recursion(int n)
{
	return (aux(n, 0));
}
