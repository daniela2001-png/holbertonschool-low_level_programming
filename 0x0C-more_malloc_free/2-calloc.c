#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - check the code for Holberton School students.
 * @nmemb : ls
 * @size : si
 * Return: Always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (0);
	}
	x = malloc(nmemb * size);
	if (x == NULL)
		return (NULL);
	for (i = 0; i < (size * nmemb); i++)
	{
	x[i] = 0;
	}
	return (x);
}
