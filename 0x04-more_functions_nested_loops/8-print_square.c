#include "main.h"
/**
 * print_square - Entry point
 *
 * @size: character
 *
 * Description: 'square'
 */
void print_square(int size)
{
int rw, ch;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (rw = 1; rw <= size; rw++)
{
for (ch = 1; ch <= size; ch++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
