#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <stddef.h>
#include <unistd.h>
#include <string.h>

/**
 *create_file - Creates a file
 *@filename: Name of the file to create
 *@text_content: string to write to the file
 *
 *Return: 1 on succcess -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t bytesWritten;
	int fd;
	size_t len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	len = strlen(text_content);
	if (text_content != NULL)
	{
		bytesWritten = write(fd, text_content, len);
		if (bytesWritten == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
