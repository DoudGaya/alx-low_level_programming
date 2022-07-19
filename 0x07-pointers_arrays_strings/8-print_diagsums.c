#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum
 * @a: input pointer.
 * @size: size of the matrix
 * Return: no return.
 */
void print_diagsums(int *a, int size)
{
int i, num1 = 0, num2 = 0;
for (i = 0; i < (size * size); i++)
{
if (i % (size + 1) == 0)
num1 += *(a + i);
if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
num2 += *(a + i);
}
printf("%d, %d\n", num1, num2);
}
