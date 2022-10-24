#include "main.h"
/**
 * rev_string - Entry point
 *
 * Description: 'reverse string'
 * @s: character
 *
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
int i, len, k;
char *a, temp;
a = s;
while (s[len] != '\0')
{
len++;
}
for (k = 1; k < len; k++)
{
a++;
}
for (i = 0; i < (len / 2); i++)
{
temp = s[i];
s[i] = *a;
*a = temp;
a--;
}
}
