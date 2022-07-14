#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
*_atoi - Write a function that convert a string to an integer.
* @s: Params
* Return: Nothing
*/
int _atoi(char *s)
{
if (s == NULL)
{
return (0);
}
else
{
return (atoi(s));
}
}
