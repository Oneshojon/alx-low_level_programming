#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>
/**
 *create_file - creates a file
 *@filename: The name to be created
 *@text_content: What should be contained in the file
 *
 *Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t file_written;
	mode_t permissions = 0600;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, permissions);
	if (file == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(file);
		return (1);
	}

	file_written = write(file, text_content, strlen(text_content));
	if (file_written == -1)
	{
		close(file);
		return (-1);
	}
	close(file);
	return (1);
}
