#include "main.h"

/**
 * set_bit - set value of bits at an index
 * @n: long int.
 * @index: index of bit to set
 * Return: 1 if success, -1 if fail
 */

int set_bit(unsigned long int *n, unsigned int index)

{
	unsigned int b;

	if (index > 63)
	{
		return (-1);
	}
	b = 1 << index;
	*n = (*n | b);
	return (1);
}
