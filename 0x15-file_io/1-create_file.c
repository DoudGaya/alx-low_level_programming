#include "main.h"

/**
 * create_file - create file
 * @filename: filename.
 * @text_content: file contents
 * Return: return 1 if pass, 0 if fail
 */

int create_file(const char *filename, char *text_content)
{
	int filed;

	int letters;

	int writ;

	if (!filename)
	{
		return (-1);
	}
	filed = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (filed == -1)
	{
		return (-1);
	}
	if (!text_content)
	{
		text_content = "";
	}
	for (letters = 0; text_content[letters]; letters++)
	{
		;
	}
	writ = write(filed, text_content, letters);
	if (writ == -1)
	{
		return (-1);
	}
	close(filed);
	return (1);
}
