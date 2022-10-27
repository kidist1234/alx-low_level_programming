#include "main.h"
/**
 * _strncat - Entry point
 *
 * Description: 'strcat n'
 * @dest: character
 * @src: character
 * @n: integer
 *
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j;
while (dest[i])
{
i++;
}
for (j = 0; j < n ; j++)
{
dest[i] = src[j];
i++;
}
dest[i] = '\0';
return (dest);
}
