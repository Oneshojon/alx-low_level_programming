#include <stdio.h>
void pre_mainfunction(void) __attribute__ ((constructor));

/**
 *pre_mainfunction - print s string before the main function runs
 *
 *Return nothing
 */
void pre_mainfunction(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
