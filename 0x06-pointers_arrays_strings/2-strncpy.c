#include "main.h"
/**
* _strncpy - copy a string to another string
* @dest: The string to be converted.
* @src: The converted integer.
* @n: The number of bytes to copy.
* Return: the pointer to dest.
*/
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (src[i] != '\0' && i < n)
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
