#include "main.h"
#include <unistd.h>

/**
 * read_textfile - function to read a text
 * @filename:  the name of the file
 * @letters: letters contained in the file
 * Return: return file_write
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, file_read, file_write;
	char *buffer;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (!file)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	file_read = read(file, buffer, letters);
	if (!file_read)
		return (0);

	file_write = write(STDOUT_FILENO, buffer, file_read);

	close(file);
	free(buffer);

	return (file_write);
}

