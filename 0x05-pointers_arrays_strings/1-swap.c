#include "main.h"
/**
 * swap_int - Entry point
 *
 * Description: 'swap int'
 * @a: pointer
 * @b: pointer
 *
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
