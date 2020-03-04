#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - check the code for Holberton School students.
 * @width: na
 * @height: no
 * Return:pointer of array
 */

int **alloc_grid(int width, int height)
{

int **p;
int x;
int col;
int filas;

if (width <= 0 || height <= 0)
{
return (NULL);

}

p = malloc(sizeof(int *) * height);
for (filas = 0; filas < height; filas++)
{
p[filas] = malloc(sizeof(int) * width);

if (p[filas] == NULL)
{
for (x = 0; x < filas; x++)
free(p[filas]);

free(p);
return (NULL);
}
}

for (filas = 0; filas < height; filas++)
{
for (col = 0; col < width; col++)
{
p[filas][col] = 0;
}

}
return (p);

}
