#include "main.h"

/**
 * binary_to_uint - binary to number
 * @b: binary.
 * Return: unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int unsin;
	int i, base2;

	if (!b)
	{
		return (0);
	}
	unsin = 0;
	for (i = 0; b[i] != '\0'; i++)
	{
		;
	}
	for (i--, base2 = 1; i >= 0; i--, base2 *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[i] & 1)
		{
			unsin += base2;
		}
	}
	return (unsin);
}
