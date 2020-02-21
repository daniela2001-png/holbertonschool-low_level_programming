#include "holberton.h"
/**
 * *rot13 - check the code for Holberton School students.
 * @s : pointer
 * Return: Always 0.
 */

char *rot13(char *s)
{

	char letras[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char num[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	int i = 0;
	int j;

				while (s[i] != '\0')
				{

					for (j = 0; j < 52; j++)
					{
					if (s[i] == letras[j])
					{

						s[i] = num[j];
						break;
					}




					}

				i++;

				}

	return (s);


}
