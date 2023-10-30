#include <string.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

/**
 *main - copies the content of a file to another file
 *@argc: NUmber of arguments
 *@argv: Array of pointers to arguments
 *
 *Return: Nothing
 */
int main(int argc, char *argv[])
{
	int fd1, fd2;
	int text_len = 1024;
	ssize_t bytesRead, bytesWritten;
	char *file_from, *file_to, *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file%s\n",
				file_from);
		exit(98);
	}
	fd2 = open(file_to, O_WRONLY  | O_TRUNC | O_CREAT, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				file_from);
		exit(99);
	}
	buffer = malloc(text_len);
	if (buffer == NULL)
		exit(1);
	while ((bytesRead = read(fd1, buffer, text_len)) > 0)
	{
		if (bytesRead == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file%s\n",
					file_from);
			close(fd1);
			close(fd2);
			free(buffer);
			exit(98);
		}
		bytesWritten = write(fd2, buffer, bytesRead);
		if (bytesWritten == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to%s\n",
					file_to);
			close(fd1);
			close(fd2);
			free(buffer);
			exit(99);
		}
	}
	free(buffer);
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
