#include "main.h"
/**
* print_rev - function that reverse a string
*
* @s: s char type params
* Return: Nothing
*/
void print_rev(char *s)
{
int i = 0;
int len;
while (s[i] != '\0')
{
i++;
}
for (len = i - 1; len >= 0; len--)
{
_putchar(s[len]);
}
_putchar('\n');
}
