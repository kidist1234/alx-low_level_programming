#include "main.h"
/**
 * _memset - Entry point
 *
 * Description: 'fills memory'
 * @s: character
 * @b: constant byte
 * @n: size
 *
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int j;
for (j = 0; j < n; j++)
{
s[j] = b;
}
return (s);
}
