#include "3-calc.h"

/**
 * op_add - function that adds two numbers.
 * @a: int type params first number
 * @b: int type params second number
 * Return: return the result of the operation.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that subtract two numbers.
 * @a: int type params first number
 * @b: int type params second number
 * Return: return the result of the operation.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that multiply two numbers.
 * @a: int type params first number
 * @b: int type params second number
 * Return: return the result of the operation.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divides two numbers.
 * @a: int type params first number
 * @b: int type params second number
 * Return: return the result of the operation.
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function that find modulus of two umbers.
 * @a: int type params first number
 * @b: int type params second number
 * Return: return the result of the operation.
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
