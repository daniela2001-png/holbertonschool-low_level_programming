#include "holberton.h"
#include <stdio.h>
/**
 * times_table - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int x, y, z = 0;

			for (x = 0; x < 10; x++)
		{

				for (y = 0; y < 10; y++)
				{
					z = x * y;

					if (z < 10)
						printf("%i,  ", z);
					else
						printf("%i, ", z);
					if (y == 9)
						printf("%i", z);
				}
			printf("\n");
		}
}
