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
	ssize_t bytesRead, bytesWritten;
	char *file_from, *file_to, buffer[1024];

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
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				file_from);
		exit(98);
	}
	fd2 = open(file_to, O_WRONLY  | O_TRUNC | O_CREAT, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_from);
		exit(99);
	}
	while ((bytesRead = read(fd1, buffer, sizeof(buffer))) > 0)
	{
		bytesWritten = write(fd2, buffer, bytesRead);
		if (bytesWritten != bytesRead)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (bytesRead == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
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
