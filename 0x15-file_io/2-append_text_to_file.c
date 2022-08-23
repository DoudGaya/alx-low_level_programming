#include "main.h"

/**
 * append_text_to_file - appn text to file input
 *
 * @filename: nameof the file
 *
 * @text_content: text to append
 *
 * Return: 1 if succeeded or 0 if fail
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int filed;

	int letters;

	int writ;

	if (!filename)
	{
		return (-1);
	}
	filed = open(filename, O_WRONLY | O_APPEND);
	if (filed == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++)
		{
			;
		}
		writ = write(filed, text_content, letters);
		if (writ == -1)
		{
			return (-1);
		}
	}
	close(filed);
	return (1);
}
