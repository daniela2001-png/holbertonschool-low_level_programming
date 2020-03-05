#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - check the code for Holberton School students.
 * @grid: ns
 * @height: nj
 * Return: Always 0.
 */

void free_grid(int **grid, int height)
{
int x;
for (x = 0; x < height; x++)
{
free(grid[x]);
}
free(grid);

}
