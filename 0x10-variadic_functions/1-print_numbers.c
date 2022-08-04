#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers followed by a new line.
 * @separator: character to separate numbers.
 * @n: number of parameters.
 * @...: variable number of arguments.
 */
void print_numbers(const char *separator, const unsigned int n, ...)

{

	va_list argnums;

	unsigned int i;

	va_start(argnums, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(argnums, int));
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(argnums);
}
