#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array of elements of a given size
 * @nmemb: number of elements.
 * @size: size of bytes.
 * Return: pointer to the allocated memory or 98 if error
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *pointer;
unsigned int i;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
pointer = malloc(nmemb * size);
if (pointer == NULL)
{
return (NULL);
}
for (i = 0; i < (nmemb * size); i++)
{
pointer[i] = 0;
}
return (pointer);
}
