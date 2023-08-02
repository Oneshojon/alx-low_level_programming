#include "main.h"

/**
 *_pow_recursion(int x, int y) - calcurates x to the pow of y
 *@x: the number whose power is to be found
 *@y: The power to which x is to be raised
 *
 *Retuern: The reuslt of the operation
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1)
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion_pow_recursion(x, y--))
}
