#include "main.h"
/**
 * print_sign - Entry point
 *
 * @n: character
 * Description: 'sign'
 *
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n == 0)
{
_putchar(48);
return (-1);
}
else
{
_putchar(45);
return (0);
}
}
