#include "holberton.h"

/**
 * binary_to_uint - converts binary to decimal u
 * @b: string or chars of array
 * Return: number converts
 */

unsigned int binary_to_uint(const char *b)
{

	int i = 0;
	int longitud = 0;
	unsigned long long decimal = 0;
	int multiplicador = 1;


	if (b == NULL)
		return (0);

	while (b[longitud] != '\0')
	{
		longitud++;
	}

	for (i = longitud - 1; i >= 0; i--)
	{
		if (b[i] == '0' || b[i] == '1')
		{

			if (b[i] == '1')
			{
				decimal += multiplicador;
			}
			multiplicador = multiplicador * 2;

		}
		else
			return (0);
	}
	return (decimal);
}
