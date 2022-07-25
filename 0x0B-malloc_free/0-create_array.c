#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates array of chars.
 * @size: size of array.
 * @c: character to fill array with.
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
char *items;
unsigned int i;
if (size == 0)
return (NULL);
items = malloc(sizeof(c) * size);
if (items == NULL)
return (NULL);
for (i = 0; i < size; i++)
items[i] = c;
return (items);
}
