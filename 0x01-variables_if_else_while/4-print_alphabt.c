#include <stdio.h>
/**
*main - print albatets
*Return: Always 0 (Success)
*/
int main(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
if (i != 'q' && i != 'e')
{
putchar(i);
}
}
putchar(10);
return (0);
}

