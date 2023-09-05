#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stddef.h>
#include <stdio.h>

/**
 *read_textfile - Reads a text file and prints it to the POSIX
 *@filename: The file to be read
 *@letters: The number of letters to read and print
 *
 *Return: Number of retter read or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t bytes_read, bytes_write;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	bytes_write = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_write == -1 || bytes_write != bytes_read)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (bytes_read);
}
