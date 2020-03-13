#include "variadic_functions.h"
/**
 * print_numbers - check the code for Holberton School students.
 * @separator: printf comma and space
 * @n: are the integers
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list ap;
	unsigned int i = 0;
	int j = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		j = va_arg(ap, int);
		printf("%d", j);

		if ((i < (n - 1)) && separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
