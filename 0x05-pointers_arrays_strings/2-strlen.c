#include "main.h"
/**
*_strlen - function that return length of a string
* @s: params
* Return: Length of the string
*/
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
