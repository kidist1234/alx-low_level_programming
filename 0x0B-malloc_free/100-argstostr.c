#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 *
 * @ac: counter of arguments
 * @av: vector of arguments
 *
 * Return: pointer to a new string, or NULL if it fails. Returns NULL
 * if ac == 0 or av == NULL
 */

char *argstostr(int ac, char **av)
{
char *s;
int x;
int y;
int z = 0;
int i;
int j;
int counter = 0;
if (ac == 0)
return (NULL);
if (av == NULL)
return (NULL);
for (x = 0; x < ac; x++)
{
for (y = 0; av[x][y] != '\0'; y++)
counter++;
counter++;
}
counter++;
s = malloc(sizeof(char) * counter);
if (s == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
s[z] = av[i][j];
z++;
}
s[z] = '\n';
z++;
}
s[z] = '\0';
return (s);
}
