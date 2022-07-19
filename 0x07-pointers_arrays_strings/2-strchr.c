#include "main.h"
/**
 *  _strchr - copy
 *  @s: params char type
 *  @c: params char type
 *  Return: \0
 */
char *_strchr(char *s, char c)
{
unsigned int i = 0;
for (; *(s + i) != '\0'; i++)
{
if (*(s + i) == c)
{
return (s + i);
}
}
if (*(s + i) == c)
{
return (s + i);
}
return ('\0');
}
