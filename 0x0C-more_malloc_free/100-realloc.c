#include "main.h"
#include <stdlib.h>
/**
 *  _realloc - reallocates a memory block.
 *  @ptr: pointer to the memory block to be reallocated.
 *  @old_size: params size of the old block.
 *  @new_size: params size of the new block.
 *  Return: pointer to the new memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
ptr = malloc(new_size);
}
if (new_size == old_size)
{
return (ptr);
}
free(ptr);
ptr = malloc(new_size);
return (ptr);
}
