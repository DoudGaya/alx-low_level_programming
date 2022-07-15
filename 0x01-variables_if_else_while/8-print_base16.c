#include <stdio.h>
/**
 *main - print base 16 lowercase and then a new line
 *Return: Always 0 (Success)
 */
int main(void)
{
char a;
int i;
for (i = 48; i <= 57; i++)
{
putchar(i);
}
for (a = 'a'; a <= 'f'; a++)
{
putchar(a);
}
putchar(10);
return (0);
}
