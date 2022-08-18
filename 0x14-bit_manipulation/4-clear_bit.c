#include "main.h"

/**
 * clear_bit - set bit to 0
 * @n: long int
 * @index: bit index
 * Return: 1 if success, -1 if fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
	{
		return (-1);
	}
	m = 1 << index;
	if (*n & m)
	{
		*n ^= m;
	}
	return (1);
}
