#include <main.h>
/**
* _strncat - concatenates two strings,
* @dest: String typed params - converted.
* @src: String type params
* @n: bytes of the conversion
* Return: the pointer to dest.
*/
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
