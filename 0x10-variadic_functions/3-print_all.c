#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_all - prints anything
 *@format: The types of character
 *
 *Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	const char *pformat = format;
	char c_arg;
	int i_arg;
	float f_arg;
	char *s_arg;

	va_start(args, format);
	while (pformat && *pformat)
	{
		if (*pformat == 'c')
		{
			c_arg = va_arg(args, int);
			printf("%c", c_arg);
		}
		else if (*pformat == 'f')
		{
			f_arg = va_arg(args, double);
			printf("%f", f_arg);
		}
		else if (*pformat == 'i')
		{
			i_arg = va_arg(args, int);
			printf("%d", i_arg);
		}
		else if (*pformat == 's')
		{
			s_arg = va_arg(args, char *);
			if (s_arg == NULL)
				printf("(nil)");
			else
				printf("%s", s_arg);
		}
		pformat++;
		if (*pformat)
			printf(", ");
	}
	va_end(args);
	putchar('\n');
}
