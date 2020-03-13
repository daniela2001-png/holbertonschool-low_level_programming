#include "variadic_functions.h"
/**
 * lyrics - check the code for Holberton School students.
 * @ap:is the value of my format
 * Return: printf
 */
void lyrics(va_list ap)
{
	printf("%c", va_arg(ap, int));
}
/**
 * integers - check the code for Holberton School students.
 * @ap:is the value of my format
 * Return: printf
 */
void integers(va_list ap)
{
	printf("%d", va_arg(ap, int));
}
/**
 * floating - check the code for Holberton School students.
 * @ap:is the value of my format
 * Return: printf
 */
void floating(va_list ap)
{
	printf("%f", va_arg(ap, double));
}
/**
 * strings - check the code for Holberton School students.
 * @ap:is the value of my format
 * Return: printf
 */
void strings(va_list ap)
{
	printf("%s", va_arg(ap, char *));
}
/**
 * print_all - check the code for Holberton School students.
 * @format: is the list of parameters for verificate
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *s;
	int i = 0, j = 0;
	op_t ops[] = {
		{'c', lyrics},
		{'i', integers},
		{'f', floating},
		{'s', strings},
	};
	va_start(ap, format);
	s = "";

	while (format[j] != '\0')
	{
		i = 0;

		while (i < 4)
		{
			if (format[j] == ops[i].op)
			{
				printf("%s", s);
				ops[i].f(ap);
				s = ", ";
			}
			i++;
		}
		j++;
	}
	va_end(ap);
	printf("\n");
}
