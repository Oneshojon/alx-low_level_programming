#include "main.h"

/**
 *print_chessboard - Prints a chessboard of given order
 *@a: A pointer to the strins
 *
 *Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
