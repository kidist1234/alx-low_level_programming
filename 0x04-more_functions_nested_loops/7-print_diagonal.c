#include "main.h"
/**
 * print_diagonal - Entry point
 *
 * @n: character
 *
 * Description: 'backwardslash'
 */
void print_diagonal(int n)
{
int ch, c;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (ch = 0; ch < n; ch++)
{
for (c = 0; c < ch; c++)
{
_putchar(32);
}
_putchar(92);
_putchar('\n');
}
}
}
