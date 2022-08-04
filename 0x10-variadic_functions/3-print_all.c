#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - function that prints characters.
 * @arg: agrument to print.
 * Return: void.
 */

void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}

/**
 * print_int - function that prints integers.
 * @arg: agrument to print.
 * Return: void.
 */

void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}

/**
 * print_float - function that prints floats.
 * @arg: agrument to print.
 * Return: void.
 */

void print_float(va_list arg)
{

	float num;

	num = va_arg(arg, double);
	printf("%f", num);
}

/**
 * print_string - function that prints strings.
 * @arg: A list of arguments pointing to
 * Return: void
 */

void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - print all types of arguments.
 * @format: string of format.
 * @...: variable number of arguments.
 */

void print_all(const char * const format, ...)
{

	va_list arguments;

	int i = 0, j = 0;

	char *separator = "";

	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};
	va_start(arguments, format);
	while (format && (*(format + i)))
	{
		j = 0;
		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
		{
			j++;
		}
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(arguments);
			separator = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(arguments);
}
