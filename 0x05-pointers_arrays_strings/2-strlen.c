#include "main.h"
/**
 * _strlen - Entry point
 *
 * Description: 'length of string'
 * @s: pointer
 *
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
int count = 0;
for (; *s != '\0'; s++)
{
count++;
}
return (count);
}
