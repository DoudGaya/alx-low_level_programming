#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - all all dogs in
 * @d: params dog struct
 * Return: no return.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

