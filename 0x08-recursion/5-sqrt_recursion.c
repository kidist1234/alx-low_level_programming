#include "main.h"
/**
 * _sqrt_recursion - return square root of @n
 *
 * @n: integer
 * Return: square root of @n
 */
int _sqrt_recursion(int n)
{
int i = 1, result = 1;
if (n <= 0)
return (-1);
else if (n == 1)
return (n);
while (result <= n)
{
i++;
result = i *i;
}
if ((i - 1) * (i - 1) == n)
return (i - 1);
else
return (-1);
}
