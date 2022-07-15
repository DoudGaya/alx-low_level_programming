#include <stdio.h>
/**
*main -  lowercase alphabets in reverse order
*Return: Always 0 (Success)
*/
int main(void)
{
char ch;
for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar(10);
return (0);
}
