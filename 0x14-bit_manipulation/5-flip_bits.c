#include "holberton.h"

/**
 * flip_bits - check the code for Holberton School students.
 * @n: numbert o look
 * @m: number to look
 * Return: count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	int count = 0;
	int i;

	result = n ^ m;


	i = 0;

	while (result != 0)
	{
		i++;
		count += result & 1;
		result >>= 1;
	}
	return (count);
}
