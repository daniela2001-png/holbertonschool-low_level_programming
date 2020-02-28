#include "holberton.h"

/**
 * _strcmp - check the code for Holberton School students.
 * @s1 : pointer
 * @s2 : pointer
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{

	int result = 0;

	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
		{
			s1++;
			s2++;
		}
	result = *s1 - *s2;
	return (result);

}
