#ifndef DOG_HEADER
#define DOG_HEADER
/**
 * struct dog - struct for dog information
 * @name: character
 * @age: float
 * @owner: chatacter
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_f;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
