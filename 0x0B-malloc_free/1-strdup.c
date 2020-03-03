#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - check the code for Holberton School students.
 * @str: string origin
 * Return: pointer s is copy of original
 */

	char *_strdup(char *str)
	{

	char *s;
	int i;


	if (str == NULL)
	{
	return (NULL);
	}



	s = malloc(sizeof(str) + 1);

	if (s == NULL)
	{
	return (NULL);
	}


	for (i = 0; *(str + i); i++)
	{
	*(s + i) = *(str + i);
	}


	return (s);

	}
