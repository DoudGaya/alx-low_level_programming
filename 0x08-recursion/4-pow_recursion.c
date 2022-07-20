#include "main.h"
/**
 * _pow_recursion - x to power y
 * @x: int params
 * @y: exponential
 * Return: answer
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
