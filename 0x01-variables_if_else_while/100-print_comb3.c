#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits.
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
int n;
for (a = 48; a <= 57; a++)
{
for (n = 49; n <= 57; n++)
{
if (n > a)
{
putchar(a);
putchar(n);
if (a != 56 || n != 57)
{
putchar(44);
putchar(32);
}
}
}
}
putchar(10);
return (0);
}


