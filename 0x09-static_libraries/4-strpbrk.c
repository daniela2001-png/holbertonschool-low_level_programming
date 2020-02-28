#include "holberton.h"
/**
 * *_strpbrk - check the code for Holberton School students.
 * @s : the string pointed
 * @accept : the charcter to found
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;
	while (*s != '\0')
		{
			for (j = 0; accept[j] != '\0'; j++)
				{
					if (s[i] == accept[j])
						{
							return (s);
						}
				}
			s++;
		}
	return (0);
}
