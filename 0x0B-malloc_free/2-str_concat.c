#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two string
 *
 * @s1: the first string
 * @s2: the string to add to @s1
 *
 * Return: a pointer that points to a newly allocated space which
 * contains the contents of @s1, followed by the contents of @s2,
 * and null terminated. Should return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
char *s;
unsigned int s1l = 0;
unsigned int s2l = 0;
unsigned int s3l;
unsigned int i = 0;
unsigned int j = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[s1l])
s1l++;
while (s2[s2l])
s2l++;
s3l = s1l + s2l;
s = malloc(sizeof(char) * s3l + 1);
if (s == NULL)
return (NULL);
while (i < s1l)
{
s[i] = s1[i];
i++;
}
while (i <= s3l)
{
s[i] = s2[j];
i++;
j++;
}
return (s);
}
