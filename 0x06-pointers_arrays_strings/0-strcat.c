#include "holberton.h"

/**
 * _strcat - check the code for Holberton School students.
 * @dest : pointer1
 * @src : pointer2
 * Return: Always 0.
 */

	char *_strcat(char *dest, char *src)
	{
	int d = 0;
	int s = 0;

		while (dest[d] != '\0')
		{
			d++;
		}

		while (src[s] != '\0')
		{
			dest[d] = src[s];
			d++;
			s++;
		}
	dest[d] = '\0';

	return (dest);

	}
