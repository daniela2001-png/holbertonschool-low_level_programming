#include "holberton.h"

/**
 * rev_string - check the code for Holberton School students.
 * @s: pointer
 * Return: Always 0.
 */

void rev_string(char *s)
{

int i = 0;
int n = 0;
int swap;

for (; s[i] != '\0'; i++)
{
	n++;
}

for (i = 0; i < n; i++)
{

swap = s[i];
s[i] = s[n - 1];
s[n - 1] = swap;

n--;
}

}
