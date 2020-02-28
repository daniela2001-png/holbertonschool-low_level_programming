#include "holberton.h"

/**
 * *_memset - prints buffer in hexa
 * @s: the string pointed to
 */
char *_memset(char *s, char b, unsigned int n)
{
char *p = s;
unsigned int i;

for (i = 0; i < n; i++)
{
*p = b;
p++;
}
return (s);
}
