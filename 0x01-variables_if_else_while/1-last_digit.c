#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: 'it is about last digit'
 *
 *Return: Always 0(Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if ((n % 10) > 5)
{
printf("Last digit of%d is and is greater than 5\n", n);
}
else if (n % 10 == 0)
{
printf("Last digit of%d is and is 0\n", n);
}
else
{
printf("Last digit of%d is and is less than 6 and not 0", n);
}
return (0);
}
