#include "dog.h"
/**
 * init_dog - initialize a dog
 * @d: struct params for a dog
 * @name: params for dog name
 * @age: params for dog age
 * @owner: params for dog owner
 * Return: no return.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
