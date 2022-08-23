#include "main.h"

/**
 * read_textfile - read and print txt file
 * @filename: file
 * @letters: letters printed.
 * Return: file or err
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filed;

	ssize_t nrd, nwr;

	char *buf;

	if (!filename)
	{
		return (0);
	}
	filed = open(filename, O_RDONLY);
	if (filed == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * (letters));
	if (!buf)
	{
		return (0);
	}
	nrd = read(filed, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);
	close(filed);
	free(buf);
	return (nwr);
}
