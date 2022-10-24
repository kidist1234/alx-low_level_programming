#include "main.h"
/**
 * _puts - Entry point
 *
 * Description: 'print string'
 * @str: character
 *
 * Return: Always 0 (Success)
 */

void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
