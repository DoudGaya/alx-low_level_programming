#include "main.h"
#include <stdlib.h>
/**
*malloc_checked - function that allocates memory using malloc
*@b: bytes params
*Return: pointer to the allocated memory or 98 if error
*/
void *malloc_checked(unsigned int b)
{
char *pointer;
pointer = malloc(b);
if (pointer == NULL)
{
exit(98);
}
return (pointer);
}
