#include "main.h"
/**
* puts2 - Prints a string
* @str: String to print
* Return: Nothing
*/
void puts2(char *str)
{
int i, len;
while (str[i] != '\0')
{
len++;
}
for (i = 0; i < len; i++)
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
