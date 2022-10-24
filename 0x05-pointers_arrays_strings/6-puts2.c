#include "main.h"
/**
 * puts2 - Entry point
 *
 * Description: 'puts2'
 * @str: character
 *
 * Return: Always 0 (Success)
 */
void puts2(char *str)
{
int j, i;
i = 0;
while (str[i] != '\0')
{
i++;
}
for (j = 0; j < i; j += 2)
{
_putchar(str[j]);
}
_putchar('\n');
}
