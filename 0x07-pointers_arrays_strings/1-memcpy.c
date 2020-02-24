 #include "holberton.h"

/**
 * *_memcpy - prints buffer in hexa
 * @dest: the string to pointed
 * @src: the string to copy
 * @n : size to print
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	char *s = src;
	unsigned int i;

		for (i = 0; i < n; i++)
		{
			*d = *s;
			d++;
			s++;
		}
	return (dest);
}
