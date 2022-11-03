#include "main.h"
/**
 * help - searches for if a number is prime
 *
 * @x: the number to check
 * @guess: the numbers we'll go through
 *
 * Return: Whether or not the number is a prime number
 */
int help(int x, int guess)
{
if (x <= 1 || x % guess == 0)
return (0);
else if (x == guess)
return (1);
else if (x > guess)
help(x, guess + 1);
return (1);
}
/**
 * is_prime_number - tells us if an integer is a prime number or not
 *
 * @n: the number to check
 *
 * Return: 0 if the number is not prime, and 1 if it is
 */
int is_prime_number(int n)
{
return (help(n, 2));
}
