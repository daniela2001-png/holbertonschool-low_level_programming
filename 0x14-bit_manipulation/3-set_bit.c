#include "holberton.h"

/**
 * set_bit - check the code for Holberton School students.
 * @n: number passed
 * @index:position to change
 * Return: 1 in case of exit or -1 it is failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n = ((1 << index) | *n);
	return (1);
}
