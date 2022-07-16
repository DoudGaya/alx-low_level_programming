#include "main.h"
/**
 * reverse_array - reverse the elements of an array
 * @a: array to reverse
 * @n: number of elements of the array.
 * Return: Return Nothing
 */
void reverse_array(int *a, int n)
{
int i, j, x;
for (i = 0; i < n - 1; i++)
{
for (j = i + 1; j > 0; j--)
{
x = *(a + j);
*(a + j) = *(a + (j - 1));
*(a + (j - 1)) = x;
}
}
}
