#include "holberton.h"
/**
 * wildcmp - check the code for Holberton School students.
 * @s1 : string
 * @s2 : strinf with a wildcard
 * Return: Always 0.
 */
int wildcmp(char *s1, char *s2)
{

	if (*s1 == '\0' && *s2 == '\0')
		{
		return (1);
		}
		if (*s1 == *s2)
		{
			return (wildcmp(s1 + 1, s2 + 1));
		}
	return (0);
}
