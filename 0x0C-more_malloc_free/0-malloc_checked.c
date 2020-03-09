#include <stdlib.h>
#include "holberton.h"

/**
 * malloc_checked - check the code for Holberton School students.
 * @b : int
 * Return: pointer
 */





void *malloc_checked(unsigned int b)
{

void *d;

d = malloc(b);

if (d == NULL)
{

exit(98);

}
return (d);

}
