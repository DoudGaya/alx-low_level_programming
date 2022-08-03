#include "function_pointers.h"

/**
 * print_name - function that prints a name
 *
 * @name: params char
 *
 * @f: pointer to a function
 *
 * Return: no return.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		f(name);
	}
}
