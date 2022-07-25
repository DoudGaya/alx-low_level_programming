#include "main.h"
#include <stdlib.h>
/**
 *  argstostr - function that concatenates all the arguments of a program.
 *  @ac: argument count.
 *  @av: argument vector.
 *  Return: pointer of an array of chars
 */
char *argstostr(int ac, char **av)
{
char *sout;
int c, i, j, ia;
if (ac == 0)
{
return (NULL);
}
for (c = i = 0; i < ac; i++)
{
if (av[i] == NULL)
{
return (NULL);
}
for (j = 0; av[i][j] != '\0'; j++)
{
c++;
}
c++;
}
sout = malloc((c + 1) * sizeof(char));
if (sout == NULL)
{
free(sout);
return (NULL);
}
for (i = j = ia = 0; ia < c; j++, ia++)
{
if (av[i][j] == '\0')
{
sout[ia] = '\n';
i++;
ia++;
j = 0;
}
if (ia < c - 1)
{
sout[ia] = av[i][j];
}
}
sout[ia] = '\0';
return (sout);
}
