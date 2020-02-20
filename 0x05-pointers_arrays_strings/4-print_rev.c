#include "holberton.h"

/**
 * print_rev - check the code for Holberton School students.
 * @s: pointer
 * Return: Always 0.
 */

void print_rev(char *s)
{
int i = 0;
int n = 0;

	for (; s[i] != '\0'; i++)
	{
		n++;

	}

	for (i = n - 1; i >= 0; i--)

	{
	_putchar(s[i]);
	}



	_putchar('\n');
}

