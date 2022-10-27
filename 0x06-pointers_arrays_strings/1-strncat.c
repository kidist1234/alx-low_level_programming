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
int j = 0;
while (dest[i])
{
i++;
}
while (j < n && src[j])
{
dest[i] = src[j];
i++;
j++;
}
dest[i + n + 1] = '\0';
return (dest);
}
