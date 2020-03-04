#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - check the code for Holberton School students.
 * @ac : as
 * @av : ad
 * Return: Always 0.
 */
char *argstostr(int ac, char **av)
{

char *s;
int i, j, c = 0;
int count = 0;

if (ac == 0 || av == 0)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
count++;
}
}
s = (char *)malloc((ac + count + 1) * sizeof(char));
if (s == NULL)
{
free(s);
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
s[c] = av[i][j];
c++;
}
s[c] = '\n';
c++;
}
return (s);
}
