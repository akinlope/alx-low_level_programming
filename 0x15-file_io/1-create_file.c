#include "main.h"
#include <stdlib.h>

/**
 * create_file - a function to create a file
 * @filename: name of the file
 * @text_content: the text of the file
 * Return: return the file
 */

int create_file(const char *filename, char *text_content)
{
	int len, file_open, file_write;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	file_open = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	file_write = write(file_open, text_content, len);

	if (file_open == -1 || file_write == -1)
		return (-1);

	close(file_open);

	return (1);
}

