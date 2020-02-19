#include "holberton.h"

/**
 * puts_half - check the code for Holberton School students.
 * @str : pointer
 * Return: Always 0.
 */

void puts_half(char *str)
{

int tam = 0;
int i;

while (str[tam] != '\0')

{

tam++;

}

if (tam % 2 != 0)

{

for (i = ((tam + 1) / 2); i < tam; i++)

{

_putchar(str[i]);

}

}

else

{

for (i = (tam / 2); i < tam; i++)

{

_putchar(str[i]);

}

}

_putchar('\n');

}

