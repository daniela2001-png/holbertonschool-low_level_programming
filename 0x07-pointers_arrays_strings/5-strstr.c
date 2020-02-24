#include "holberton.h"
/**
 * *_strstr - check the code for Holberton School students.
 * @haystack : the string pointed to
 * @needle : the substring
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
		while (*haystack != '\0')
		{
			char *i = haystack;
			char *j = needle;

				while (*haystack && *j && *haystack == *j)
				{
					haystack++;
					j++;
				}
				if (!*j)
				{
					return (i);
				}
			haystack = i + 1;
		}
	return (0);
}
