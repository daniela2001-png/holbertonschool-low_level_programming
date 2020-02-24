#include "holberton.h"

/**
 * *_memset - prints buffer in hexa
 * @s: the string pointed to
 * @b: the the character to copy
 * @n: the size of my string to print
 * Return: pointer to s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;
	unsigned int i;

		for (i = 0; i < n; i++)
		{
			*p = b;
			p++;
		}
	return (s);
}
