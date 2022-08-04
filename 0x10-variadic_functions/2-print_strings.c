#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings followed by a new line.
 * @separator: separator character.
 * @n: number of parameters.
 * @...: variable number of arguments.
 * Return: void.
 */

void print_strings(const char *separator, const unsigned int n, ...)

{

	va_list string;

	char *str;

	unsigned int index;

	va_start(string, n);
	for (index = 0; index < n; index++)
	{
		str = va_arg(string, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (index != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(string);
}
