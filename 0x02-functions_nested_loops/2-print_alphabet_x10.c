#include "main.h"
/**
* print_alphabet_x10 - functions that prints alphabet 10 times
* Return: On success
*/
void print_alphabet_x10(void)
{
int i;
int j;
for (i = 1; i <= 11; i++)
{
for (j = 'a'; j <= 'z'; j++)
{
_putchar(j);
}
_putchar('\n')
}
}
