#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: Width of grid
 * @height: height of grid
 *
 * Return: NULL on failure, NULL if @width or @height is 0 or negative,
 * on success: a pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
int **s;
int x;
int y;
int z;
if (width <= 0 || height <= 0)
return (NULL);
s = malloc(sizeof(int *) * height);
if (s == NULL)
return (NULL);
for (x = 0; x < height; x++)
{
s[x] = malloc(sizeof(int) * width);
if (s[x] == NULL)
{
while (x >= 0)
{
free(s[x]);
x--;
}
free(s);
return (NULL);
}
}
for (y = 0; y < height; y++)
{
for (z = 0; z < width; z++)
s[y][z] = 0;
	}
return (s);
}
