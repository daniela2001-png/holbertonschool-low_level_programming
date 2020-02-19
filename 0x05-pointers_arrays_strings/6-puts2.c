#include "holberton.h"

/**
 * puts2 - check the code for Holberton School students.
 * @str : pointer
 * Return: Always 0.
 */

void puts2(char *str)
{

int tam = 0;
int i;

while (str[tam] != '\0')
{
tam++;
}

i = 0;

while (i < tam)
{
if (i % 2 == 0)
{
_putchar(*(str + i));
}
i++;

}
_putchar('\n');

}

