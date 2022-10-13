#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x;
long int y;
long long int z;
char a;
float b;
printf("Size of a char: \n", (unsigned long)sizeof(a));
printf("Size of an int: \n", (unsigned long)sizeof(x));
printf("Size of a long int: \n", (unsigned long)sizeof(y));
printf("Size of a long long int: \n", (unsigned long)sizeof(z));
printf("Size of a float: \n", (unsigned long)sizeof(b));
return (0);
}
