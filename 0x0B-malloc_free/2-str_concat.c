#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - check the code for Holberton School students.
 * @s1 : pointer
 * @s2 : pointer
 * Return: pointer b
 */
char *str_concat(char *s1, char *s2)
{

	int i, j = 0;
	int size1 = 0, size2 = 0;
	char *b = NULL;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}
	b = malloc(1 + (size1 + size2) * sizeof(char));
	if (b == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size1; i++)
	{
		*(b + i) = s1[i];
	}
	for (j = 0; j < size2; j++)
	{
		*(b + i + j) = s2[j];
	}
	*(b + i + j) = '\0';
	return (b);
}
