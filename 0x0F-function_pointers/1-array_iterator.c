#include "function_pointers.h"
/**
 * array_iterator - function that executes another function
 * given as a parameter on each element of an array.
 * @array: params array of integers
 * @size: size of the array.
 * @action: pointer to the function.
 * Return: no return.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array && action)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
