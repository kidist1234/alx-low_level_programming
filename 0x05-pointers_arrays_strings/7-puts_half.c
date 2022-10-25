#include "main.h"
/**
 * puts_half - Entry point
 *
 * Description: 'the program's description'
 * @str: character
 *
 * Return: Always 0 (Success)
 */
void puts_half(char *str)
{
int len = 0;
int j;
while (str[len] != '\0')
{
len++;
}
if (len % 2 == 1)
{
j = (len - 1) / 2;
j += 1;
}
else
{
j = len / 2;
}
for (; j < len; j++)
{
_putchar(str[len]);
}
_putchar('\n');
}
