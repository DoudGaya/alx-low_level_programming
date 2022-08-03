#include <stdio.h>
#include <stdlib.h>

/**
 * main - print opcodes of a function
 * @argc: argument count.
 * @argv: argument vector.
 * Return:  0.
 */

int main(int argc, char *argv[])
{
	char *opcodes = (char *) main;

	int i, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < bytes; i++)
	{
		printf("%02x", opcodes[i] & 0xFF);
		if (i != bytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
