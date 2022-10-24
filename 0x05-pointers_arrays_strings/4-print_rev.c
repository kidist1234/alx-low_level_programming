#include "main.h"
/**
 * print_rev - Entry point
 *
 * Description: 'revers string'
 * @s: character
 *
 * Return: Always 0 (Success)
 */

void print_rev(char *s)
{
int len;
len = 0;
while (s[len] != '\0')
{
len++;
}
for (len = len - 1; len >= '\0'; len--)
{
_putchar(s[len]);
}
_putchar('\n');
}
