#include <stdlib.h>
#include "main.h"
/**
 * count_word - count number of words in a string
 * @s: string to evaluate
 * Return: number of words
 */
int count_word(char *s)
{
int fl, c, w;
fl = 0;
w = 0;
for (c = 0; s[c] != '\0'; c++)
{
if (s[c] == ' ')
{
fl = 0;
}
else if (fl == 0)
{
fl = 1;
w++;
}
}
return (w);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (Success)
 *
 * or NULL (Error)
 *
 */
char **strtow(char *str)
{
char **mtrx, *tmp;
int i, k = 0, len = 0, word, c = 0, begins, end;
while (*(str + len))
{
len++;
}
word = count_word(str);
if (word == 0)
{
return (NULL);
}
mtrx = (char **) malloc(sizeof(char *) * (word + 1));
if (mtrx == NULL)
{
return (NULL);
}
for (i = 0; i <= len; i++)
{
if (str[i] == ' ' || str[i] == '\0')
{
if (c)
{
end = i;
tmp = (char *) malloc(sizeof(char) * (c + 1));
if (tmp == NULL)
return (NULL);
while (begins < end)
*tmp++ = str[begins++];
*tmp = '\0';
mtrx[k] = tmp - c;
k++;
c = 0;
}
}
else if (c++ == 0)
{begins = i; }
}
mtrx[k] = NULL;
return (mtrx);
}
