 #include "holberton.h"

/**
 * _strspn - check the code for Holberton School students.
 * @s : string
 * @accept : string to compare
 * Return: i
 */

unsigned int _strspn(char *s, char *accept)
{

	int i,j;

	for (i = 0; s[i]; i++)
		{
			for(j = 0; accept[j]; j++)
				{
					if (s[i] == accept[j])
						{
							break;
						}

				}
					if (!accept[j])
						{
							break;
						}
		}
	return (i);
}
