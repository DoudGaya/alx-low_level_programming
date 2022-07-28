#include "main.h"
#include <stdlib.h>
/**
 *  string_nconcat - concatenates two strings.
 *  @s1: string one to concatenate.
 *  @s2: string two to concatenate.
 *  @n: bytes
 *  Return: pointer to the memory or 98
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *sout;
unsigned int num1, num2, numout, i;
if (s1 == NULL)
{s1 = ""; }
if (s2 == NULL)
{
s2 = "";
}
for (num1 = 0; s1[num1] != '\0'; num1++)
{
;
}
for (num2 = 0; s2[num2] != '\0'; num2++)
{
;
}
if (n > num2)
{
n = num2;
}
numout = num1 + n;
sout = malloc(numout + 1);
if (sout == NULL)
{
return (NULL);
}
for (i = 0; i < numout; i++)
{
if (i < num1)
{
sout[i] = s1[i];
}
else
{
sout[i] = s2[i - num1];
}
}
sout[i] = '\0';
return (sout);
}
