#include "holberton.h"

/**
 * get_bit - given the value of determinated bit
 * @n: number to check
 * @index:position of bit to look the value
 * Return: value of index given
 */
int get_bit(unsigned long int n, unsigned int index)
{

	if (index > 64)
		return (-1);

	return ((n >> index) & 1);
}
