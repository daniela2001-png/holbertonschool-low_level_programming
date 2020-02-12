#include "holberton.h"
<<<<<<< HEAD
/**
 * print_to_98 - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{











}
=======
#include <stdio.h>
/**
* print_to_98 - prints al natural numbers to 98
* @n: The character to print
*
*/

void print_to_98(int n)
{
	int a;

	if (n < 98)
	{
		for (a = n; a < 98; a++)
		{
		printf("%d, ", a);
		}
		printf("98");
		putchar('\n');
	}
	if (n > 98)
	{
		for (a = n; a > 98; a--)
		{
		printf("%d, ", a);
		}
		printf("98\n");
	}
	if (n == 98)
	{
		printf("98\n");
	}
}

>>>>>>> fd5a173d5eebea8511a759a8e1000a9517a94cee
