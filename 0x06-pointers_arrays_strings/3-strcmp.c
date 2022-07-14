#include "main.h"
/**
* _strcmp - compares two strings
* @s1: The string to be converted.
* @s2: The converted integer.
* Return: the pointer to dest.
*/
int _strcmp(char *s1, char *s2)
{
int i, j = 0;
while (j == 0)
{
  if ((*(s1 + 1) == '\0') && (*(s2 + 1) == '\0'))
{
break;
}
j = *(s1 + 1) - *(s2 + 1);
s1++;
}
return (j);
}
