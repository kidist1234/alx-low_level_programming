#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
int i, size = 0;
unsigned long int curr;
for (i = 63; i >= 0; i--)
{
curr = n >> i;
if (curr & 1)
{
_putchar('1');
size++;
}
else if (size)
_putchar('0');
}
if (!size)
_putchar('0');
}
