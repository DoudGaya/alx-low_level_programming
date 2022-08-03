#include "3-calc.h"

/**
 * get_op_func - function that returns the
 * function associated to operat
 * @s: char operator.
 * Return: pointer to function.
 *
 */

int (*get_op_func(char *s))(int, int)
{
op_t opf[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;

while (i < 10)
{
if (s[0] == opf->op[i])
{
break;
}
i++;
}
return (opf[i / 2].f);
}
