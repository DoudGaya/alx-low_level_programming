#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints the minimum number of coins
 *
 * to make change for an amount of money.
 *
 * @argc: argument count.
 *
 * @argv: argument vector.
 *
 *Return: 0 - success.
 */
int main(int argc, char *argv[])
{
int ch, coins = 0;
if (argc == 1 || argc > 2)
{
printf("Error\n");
return (1);
}
ch = atoi(argv[1]);
while (ch > 0)
{
if (ch >= 25)
{
ch -= 25;
}
else if (ch >= 10)
{
ch -= 10;
}
else if (ch >= 5)
{
ch -= 5;
}
else if (ch >= 2)
{
ch -= 2;
}
else if (ch >= 1)
{
ch -= 1;
}
coins += 1;
}
printf("%d\n", coins);
return (0);
}
