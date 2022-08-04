#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that sums all the numbers passed as arguments
 * @n: number of parameters.
 * @...:variable number of arguments.
 * Return: If n is 0, return 0. Otherwise, return the sum of all paramters.
 */
int sum_them_all(const unsigned int n, ...)

{

	va_list argnums;

	unsigned int i, sum = 0;

	va_start(argnums, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(argnums, int);
	}
	va_end(argnums);
	return (sum);
}
