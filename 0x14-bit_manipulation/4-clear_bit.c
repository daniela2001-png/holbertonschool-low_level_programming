#include "holberton.h"

/**
 * clear_bit - check the code for Holberton School students.
 * @n: number given
 * @index:position to change
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n = (~(1 << index) & *n);
	return (1);
}
