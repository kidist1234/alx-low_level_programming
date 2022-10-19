#include "main.h"
/**
 * _abs - Entry point
 *
 *@c: character
 *
 * Description: 'int _abc'
 *
 * Return: Always 0 (Success)
 */
int _abs(int c)
{
if (c < 0)
{
int abval;
abval = c * -1;
return (abval);
}
return (c);
}
