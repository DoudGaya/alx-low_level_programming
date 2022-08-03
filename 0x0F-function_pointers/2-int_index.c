#include "function_pointers.h"
/**
 * int_index - searches for an integer in an array
 * @array: params input integer array.
 * @size: size of the array.
 * @cmp: pointer to a function 
 * Return: index of the integer or -1 if not found.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	if (array && cmp)
	{
		if (size <= 0)
		{
			return (-1);
		}
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
