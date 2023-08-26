#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *pre_mainfunction - print s string before the main function runs
 *
 *Return nothing
 */
void __attribute__ ((constructor)) pre_mainfunction()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("my house upon my back!\n");
}
