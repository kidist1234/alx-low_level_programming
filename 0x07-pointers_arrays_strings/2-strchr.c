#include "main.h"
#include <stdlib.h>

/**
 * _strchr - Entry point
 *
 * Description: 'the program's description'
 * @s: string
 * @c:  character
 *
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
while (*s)
{
s++;
}
if (*s != c)
s++;
else
return(s);
}
if(c == '\0')
return (s);
return (NULL);
}
