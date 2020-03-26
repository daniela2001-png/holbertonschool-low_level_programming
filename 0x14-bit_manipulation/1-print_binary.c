#include "holberton.h"

/**
 * print_binary - check the code for Holberton School students.
 * @n:number given
 * Return: Always 0.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

			printf("%lu", n & 1);

}
