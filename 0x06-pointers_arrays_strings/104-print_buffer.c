#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 *print_buffer - The function must print the content of size
 *@b: The destination printed to
 *@size: maximum byte to print
 *
 *Return: Buffer to destination
 */
void print_buffer(char *b, int size)
{
	int i = 0;
	int j;

	if (size <= 0)
		printf("\n");
	for (i = 0 ; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = 0; j < 10; j++)
		{
			if (j + i < size)
				printf("%02x", (unsigned char) b[i + j]);
			if (j % 2 != 0)
				printf(" ");
		}
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				if (isprint(b[j + i]))
					printf("%c", b[j + i]);
				else
					printf(".");
			}
		}
		printf("\n");
	}
}
