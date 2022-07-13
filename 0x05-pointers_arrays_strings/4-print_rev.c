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
int j = strlen(s) - 1;
while (i < j)
{
char text = s[i];
s[i] = s[j];
s[j] = text;
i++;
j--;
}
}
