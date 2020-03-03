#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - check the code for Holberton School students.
 * @size: lenght of string
 * @c: string
 * Return: pointer s.
 */

	char *create_array(unsigned int size, char c)
	{
	char *s;
	unsigned int i;

	if (size == 0)
	{
	return (NULL);
	}

	s = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{

	s[i] = c;

	}

	return (s);
	free(s);

	}
