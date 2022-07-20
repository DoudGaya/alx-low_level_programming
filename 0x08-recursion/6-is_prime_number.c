#include "main.h"
/**
 * is_prime - checks for prime number
 *
 * @n: input number.
 *
 * @c: iterator.
 *
 * Return: 1 if true, 0 if false
 *
 */
int is_prime(unsigned int n, unsigned int c)
{
if (n % c == 0)
{
if (n == c)
{
return (1);
}
else
{
return (0);
}
}
return (0 + is_prime(n, c + 1));
}
/**
 * is_prime_number - checks prime
 *
 * @n: input number.
 *
 * Return: 1 if true, 0 if false
 *
 */
int is_prime_number(int n)
{
if (n == 0 || n < 0 || n == 1)
{
return (0);
}
return (is_prime(n, 2));
}
