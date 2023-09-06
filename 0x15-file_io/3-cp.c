#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdarg.h>

/**
 *error_exit - prints the error message and returns code
 *@exit_code: The required exit code
 *@format: THe text to print
 *
 *Return: Nothing
 */
void error_exit(int exit_code, const char *format, ...)
{
	va_list args;

	va_start(args, format);
	dprintf(STDERR_FILENO, format, args);
	va_end(args);
	exit(exit_code);
}
/**
 *main - copies the content of  file to another file
 *@argc: Number of arguments
 *@argv: array of pointers to arguments
 *
 *Return: Exit codes
 */

int main(int argc, char *argv[])
{
	const char *file_from = argv[1];
	const char *file_to = argv[2];
	int fd_from, fd_to;
	ssize_t n, written;
	char buffer[1024];

	if (argc != 3)
	{
		error_exit(97, "Usage: cp file_from fie_to\n");

	}
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file %s\n",
				file_from);
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (fd_to == -1)
		error_exit(99, "Error: Can't write to file %s\n", file_to);
	while ((n = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		written = write(fd_to, buffer, n);
		if (written == -1)
		{
			error_exit(99, "Error: Can't write to file %s\n", file_to);
		}
	}
	if (n == -1)
		error_exit(98, "Error: Can't read from file %s\n", file_from);
	if (close(fd_from) == -1)
		error_exit(100, "Error: Can't close fd %d\n", fd_from);
	if (close(fd_to) == -1)
		error_exit(100, "Error: Can't close fd %d\n", fd_to);
	return (0);
}
