
#include "holberton.h"
/**
 * print_diagonal - check the code for Holberton School students.
 * @n : n is int
 *  
 */

void print_diagonal(int n)
{
	int x;
	int y;

	
	if (n > 0)
		{
			for (x = 1 ; x <= n ; x++)
				{
					for (y = 1 ; y <= n ; y++)
						{
							if (y < x)
								{
									
									_putchar(92);
								}
							else
								{
									_putchar(' ');
								}
						}
					_putchar('\n');
				}
		}
	else if (n <= 0)
		{
			_putchar('\n');

		}

}