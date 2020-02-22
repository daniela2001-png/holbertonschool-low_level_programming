#include <stdio.h>


void main (void)

{
	int n = 10;
	int a ;
	int b;

	while (n > 1)
		{
			for (a = 0; a <= n; a++)
				{    
					putchar('#');
				}
			for (b = n; b <= n; b++)
				putchar('.');
			n--;
			putchar('\n');

		}

}
