#include "holberton.h"

/**
 * *leet - check the code for Holberton School students.
 * @s : pointer
 * Return: Always 0.
 */

char *leet(char *s)
{

	char letter[10] = "aAeEoOtTlL";
	char number[10] = "4433007711";

	int i = 0;
	int b;

			while (s[i] != '\0')
			{

				for (b = 0 ; b <= 9; b++)
				{
					if (s[i] == letter[b])
					{
						s[i] = number[b];
					}

				}





			i++;
			}


	return (s);

}
