#include "variadic_functions.h"
#include <stdbool.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *is_number - checks for numbers
 *@str: passed string
 *
 *Return: A bool
 */
bool is_number(const char *str)
{
	if (*str == '-' || *str == '+')
		str++;
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
		{
			return (false);
		}
		str++;
	}
	return (true);
}
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
	const char *pstr;
	int number;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		pstr = va_arg(args, const char*);
		if (!is_number(pstr))
			continue;
		number = atoi(pstr);
		printf("%d", number);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);
	putchar('\n');
}
