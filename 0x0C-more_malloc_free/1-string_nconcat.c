#include "holberton.h"
#include <stdlib.h>

/**
 * char *string_nconcat - check the code for Holberton School students.
 * @s1: s1
 * @s2 : s2
 * @n : int
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *x;
	unsigned int j = 0, size1 = 0;
	unsigned int i = 0, size2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (*(s1 + j) != '\0')
	{
		j++;
		size1++;

	}
	while (*(s2 + i) != '\0')
	{
		i++;
		size2++;
	}
	if (n >= size2)
		n = size2;
	x = (char *)malloc((size1 + n + 1) * sizeof(char));
	if (x == NULL)
		return (NULL);
	for (j = 0; j < size1; j++)
	x[j] = s1[j];
	for (i = 0; i < n; i++)
	{
		x[i + j] = s2[i];
	}
	x[i + j] = '\0';
	return (x);
}
