#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print struct dog
 * @d: pointer to struct dog
 * Return: return pointer to struct
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->name == NULL)
printf("Name: (nil)\n");
else
printf("Name: %s\n", d->name);
printf("age: %f\n", d->age);
if (d->owner == NULL)
  printf("owner: (nil)\n");
else
printf("owner: %s\n", d->owner);
}
