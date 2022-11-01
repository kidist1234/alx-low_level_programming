#include "main.h"
/**
 * main - Entry point
 *
 * Description: 'length'
 * @s: character
 * @accept: character
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j;
int c = 0;
for (j = 0; s[j] != '\0'; j++)
{
if (s[j] != 32)
{
for (i = 0; accept[i] != '\0'; i++)
{
if (s[j] == accept[i])
c++;
}
}
else
return (c);
}
return (c);
}
