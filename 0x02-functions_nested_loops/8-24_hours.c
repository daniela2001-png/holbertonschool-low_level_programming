#include "holberton.h"
/**
 * jack_bauer - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
int x;
int z;
int w;
int y;

for (x = '0'; x <= '2'; x++)
{
for (z = '0'; z <= '9'; z++)
{
for (w = '0'; w <= '5'; w++)
{
for (y = '0'; y <= '9'; y++)
{
if (!(x == '2' && z > '3'))
{
_putchar(x);
_putchar(z);
_putchar(':');
_putchar(w);
_putchar(y);
_putchar ('\n');
}
}

}

}

}

}
