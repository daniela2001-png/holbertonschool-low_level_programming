#include "holberton.h"
void print_alphabet_x10(void)
{
	int y=0;
	char x;

	while (y < 9)
		{
		for (x ='a';x <='z';x++)

			_putchar(x);
	y++;

		}

	_putchar('\n');

}
