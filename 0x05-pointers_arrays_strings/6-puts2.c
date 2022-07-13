#include "main.h"
#include <string.h>
/**
* puts2 - Prints a string
* @str: String to print
* Return: Nothing
*/
void puts2(char *str)
{
int i, len;
i = 0;
len = strlen(str);
for (i = 0; i < len; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
