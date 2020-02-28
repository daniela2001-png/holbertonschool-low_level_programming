#include "holberton.h"

/**
 * _strncat - check the code for Holberton School students.
 * @dest : pointer
 * @src : pointer
 * @n : integer
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{

	int d = 0;
	int s = 0;

	while (dest[d] != '\0')
		{
			d++;

		}

	while (src[s] != '\0' && s < n)
		{
			dest[d] = src[s];
			d++;
			s++;
		}

	return (dest);

}
