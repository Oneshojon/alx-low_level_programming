#include "main.h"

/**
 *swap_int - Swaps the values of two ints
 *@a: !st int
 *@b: 2nd int
 *
 *Returns: Nothing
 */
void swap_int(int *a, int *b)
{
	int tem;

	tem = *a;
	*a = *b;
	*b = tem;
}
