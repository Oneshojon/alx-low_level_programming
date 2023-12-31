#include "variadic_functions.h"
#include <stdbool.h>
#include <stdarg.h>
#include <stdio.h>

/**
 *print_numbers - prints numberss passed as arguments
 *@separator: Passed argument
 *@n: number of integers passed to the function
 *
 *Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	int number;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		number = va_arg(args, int);
		printf("%d", number);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);
	putchar('\n');
}
