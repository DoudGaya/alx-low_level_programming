#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog.
 * @name: params name of the dog
 * @age: params age of the dog in years
 * @owner: params owner of the dog
 * Return: struct dog. NULL if failed.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *pdog;
int i, cn, lowner;
pdog = malloc(sizeof(*pdog));
if (pdog == NULL || !(name) || !(owner))
{
free(pdog);
return (NULL);
}
for (cn = 0; name[cn]; cn++)
{
;
}
for (lowner = 0; owner[lowner]; lowner++)
{
;
}
pdog->name = malloc(cn + 1);
pdog->owner = malloc(lowner + 1);
if (!(pdog->name) || !(pdog->owner))
{
free(pdog->owner);
free(pdog->name);
free(pdog);
return (NULL);
}
for (i = 0; i < cn; i++)
{
pdog->name[i] = name[i];
}
pdog->name[i] = '\0';
pdog->age = age;
for (i = 0; i < lowner; i++)
{
pdog->owner[i] = owner[i];
}
pdog->owner[i] = '\0';
return (pdog);
}
