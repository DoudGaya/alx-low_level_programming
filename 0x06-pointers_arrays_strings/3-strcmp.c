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
while (s1[i] != '\0' && s2[j] != '\0')
{
if (s1[i] != s2[j])
{
return (s1[i] - s2[j]);
}
i++;
j++;
}
}
