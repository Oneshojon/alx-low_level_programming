#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <stdarg.h>
#include <stdio.h>

/**
 *print_error - prints error to posix message and return exit code
 *@exit_code: The required exit code
 *@message: The message to be printed
 *@args: other arguments
 *
 *Return: Error codes
 */
void print_error(int exit_code, const char *message, ...)
{
	va_list args;

	var_start(args, format);
	dprintf(STDERR_FILENO, message, args);
	va_end(args);
	exit(exit_code);
}
/**
 *main - copies the content of a file to another
 *@argc: Number of arguments
 *@argv: Array of pointers to the arguments
 *
 *Return: Error codes
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		print_error(97, "Usage: cp file_from file_to\n");
	}

	int fd1, fd2;
	const char *file_from = argv[1];
	const char *file_to = argv[2];
	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	fd1 = open(file_from, O_RDONLY);
		if (fd1 == -1 || access(file_from, F_OK) == -1)
		{
			print_error(98, "Error: Can't read from file %s\n", file_from);
		}
	if (access(file_to) == 0)
	{
		fd2 = open(file_to, O_WRONLY | O_TRUNC);
		if (fd2 == -1)
		{
			print_error(99, "Error: Can't write to %s\n", file_to);
		}
	}
	else
	{
		fd2 = open(file_to, O_WRONLY | O_CREAT, 0664);
		if (fd2 == -1)
			print_error(99, "Error: Can't write to %s\n", file_to);
	}
	while ((bytes_read = read(fd1, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd2, buffer, bytes_read);
		if (bytes_read != bytes_written)
		{
			print_error(99, "Error: Can't write to %s\n", file_to);
		}
	}
	if (bytes_read == -1)
	{
		print_error(98, "Error: Can't read from file %s\n", file_from);
	}
	if (close(fd1) == -1)
	{
		print_error(100, "Error: Can't close fd %d\n", fd1);
	}
	if (close(fd2) == -1)
	{
		print_error(100, "Error: Can't close fd %d\n", fd2);
	}
	return (0);
}
