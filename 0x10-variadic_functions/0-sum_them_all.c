#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: number of arguments passed to the function
 *
 * Return: the resulting sum
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
int sum = 0;
unsigned int i;
va_start(ap, n);
if (n == 0)
return (0);
for (i = 0; i < n; i++)
sum += va_arg(ap, int);
va_end(ap);
return (sum);
}
