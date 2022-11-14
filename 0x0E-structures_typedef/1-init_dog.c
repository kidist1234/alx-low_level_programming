#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialize function for struct dog
 * @d: pointer to dog struct
 * @name: character
 * @age: float
 * @owner: character
 * Return: return pointer to struct
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;
d->name = name;
d->age = age;
d->owner = owner;
}
