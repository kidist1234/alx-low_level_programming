#include "main.h"
/**
 * help - Finds the square root of two numbers
 *
 * @x: The number
 * @guess: The number to test for the square root of @x
 *
 * Return: square root
 */
int help(int x, int guess)
{
if (guess * guess > x)
return (-1);
else if (guess * guess == x)
return (guess);
else
return (help(x, guess + 1));
return (1);
}
/**
 * _sqrt_recursion - return square root of @n
 *
 * @n: integer
 * Return: square root of @n
 */
int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
return (help(n, 1));
}
