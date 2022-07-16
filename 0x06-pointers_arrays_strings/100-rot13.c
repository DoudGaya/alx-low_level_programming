#include "main.h"
/**
 * rot13 - return rot13 of a string
 * @s: input string.
 * Return: Nothing
 */
char *rot13(char *s)
{
int varr = 0, i;
char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
while (*(s + varr) != '\0')
{
for (i = 0; i < 52; i++)
{
if (*(s + varr) == alphabet[i])
{
*(s + varr) = rot13[i];
break;
}
}
varr++;
}
return (s);
}
