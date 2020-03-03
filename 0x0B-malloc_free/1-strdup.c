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
	int i, j;


	if (str == NULL)
	{
	return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	i++;

	s = malloc(i * sizeof(char));



	if (s == NULL)
	{
	return (NULL);
	}


	for (j = 0; j < i; j++)
	{
	*(s + j) = *(str + j);
	}


	return (s);

	}
