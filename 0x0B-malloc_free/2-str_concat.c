#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings.
 * @s2:  the second string.
 * @s1:  the first string.
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
char *sout;
unsigned int i, j, k, limit;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (i = 0; s1[i] != '\0'; i++)
{
;
}
for (j = 0; s2[j] != '\0'; j++)
{
;
}
sout = malloc(sizeof(char) * (i + j + 1));
if (sout == NULL)
{
free(sout);
return (NULL);
}
for (k = 0; k < i; k++)
{
sout[k] = s1[k];
}
limit = j;
for (j = 0; j <= limit; k++, j++)
{
sout[k] = s2[j];
}
return (sout);
}
