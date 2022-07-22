#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: char type params, memory
 * @b: constant params,
 * Return: dest
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(s + 1) = b;
}
return (s);
}
