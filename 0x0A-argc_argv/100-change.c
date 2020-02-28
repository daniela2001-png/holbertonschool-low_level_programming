#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - Entry point
 * @argc : size
 * @argv : string
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int moneda[5] = {25, 10, 5, 2, 1};
int x, i, cambio = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
x = atoi(argv[1]);
if (x < 0)
{
printf("0\n");
return (0);
}
else
{
for (i = 0; i < 5; i++)
{
if (x >= moneda[i])
{
x = x - moneda[i];
cambio = cambio + 1;
if (x >= moneda[i])
i--;
if (x == 0)
break;
}
}
printf("%d\n", cambio);
return (0);
}
}
