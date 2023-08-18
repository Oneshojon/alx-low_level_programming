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
	char c;
	int i = 0;
	float f;
	char *s;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'f':
				f = (float)  va_arg(args, double);
				printf("%f", f);
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 's':
				s = va_arg(args, char*);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
		}
		i++;
		if (format[i])
			printf(", ");
	}
	va_end(args);
	printf("\n");
}
