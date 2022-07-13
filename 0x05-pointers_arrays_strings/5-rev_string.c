#include "main.h";

/**
* rev_string - Prints a string, in a reverse order
* @s: String to print
* Return: Nothing
*/
void rev_string(char *s)
{
int i = 0;
int len;
char temp;
while (s[i] != '\0')
{
i++;
}
len = i - 1;
for (i = 0; i < len; i++)
{
temp = s[i];
s[i] = s[len];
s[len] = temp;
len--;
}
}
