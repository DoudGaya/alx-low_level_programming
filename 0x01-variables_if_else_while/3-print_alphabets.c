#include <stdio.h>
/**
 *main - print alphabets (ch)
 *Return: Always 0 (Success)
*/
int main(void)
{
int a;
for (a = 97; a <= 122; a++)
{
putchar(a);
}
for (a = 65; a <= 90; a++)
{
putchar(a);
}
putchar(10);
return (0);
}
