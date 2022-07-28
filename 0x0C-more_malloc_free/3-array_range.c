#include "main.h"
#include <stdlib.h>
/**
 * aray_range - function that creates an array of integers
 * @min: min value of the array
 * @max: max value of the array
 * Return: pointer to the array or NULL if error
 */
int *array_range(int min, int max)
{
int *arr;
int i;
if (min > max)
{
return (NULL);
}
arr = malloc(sizeof(*arr) * ((max - min) + 1));
if (arr == NULL)
{
return (NULL);
}
for (i = 0; min <= max; i++, min++)
{
arr[i] = min;
}
return (arr);
}
