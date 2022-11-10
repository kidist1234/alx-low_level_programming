#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function to concatnate strings with n bytes
 * @s1: destination for concatnation
 * @s2: source of string
 * @n: int type for size of byte
 * Return: pointer to new memory allocated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int c, c1;
int sign = n;
char *p;
int len1, len2;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (len1 = 0; s1[len1] != '\0'; len1++)
;
for (len2 = 0; s2[len2] != '\0'; len2++)
;
if (sign >= len2)
{
sign = len2;
p = malloc(sizeof(char) * (len1 + len2 + 1));
}
else
p = malloc(sizeof(char) * (len1 + n + 1));
if (p == NULL)
return (NULL);
for (c = 0; c < len1; c++)
{
p[c] = s1[c];
}
for (c1 = 0; c1 < sign; c1++)
{
p[c++] = s2[c1];
}
p[c++] = '\0';
return (p);
}
