#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - Returns the sum of all argument to the function
 *@n: number of arguments
 *
 *Return: An int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int); /*picks the first argument*/
	}
	va_end(args);
	return (sum);
}
