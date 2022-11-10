#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *array_range - make  memory for an array
 * @min: int type
 * @max: int type
 * Return:  return pointer to array
 */

int *array_range(int min, int max)
{
int *p;
int ary;

if (min > max)
{
return (NULL);
}

p = malloc(sizeof(int) * (max - min + 1));
if (p == NULL)
{
return (NULL);
}
ary = 0;
while (min <= max)
{
p[ary] = min;
min++;
ary++;
}
return (p);
}
