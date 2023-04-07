#include "main.h"

/**
 * flip_bits - flip bits to get another number
 * @n: num one.
 * @m: num two.
 * Return: bits flipped.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flips;

	for (flips = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
		{
			flips++;
		}
	}
	return (flips);
}
