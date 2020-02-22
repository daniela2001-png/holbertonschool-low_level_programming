#include <stdio.h>

/**
 * main - check the code for Holberton School student
 *
 */
void main(void)
{
	int size 10;
	int a = size, b = size;

	while (size >= 0)
		{
			while (a < size && a > 0){
				putchar('.');
				a--:
			}
			while (b >= size){
				putchar('#');
			}
			size--;
		}
	putchar('\n');
	
}
