#include <stdio.h>
/**
 *  main - prints number of arguments
 *  @argc: argument count
 *  @argv: argument vector
 *  Return: 0 - success.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
