#include "hf.h"

unsigned long hash_function(char *str)
{
	unsigned long i = 0;
	int j;

	for (j = 0; str[j]; j++)
		i += str[j];
	return i % CAPACITY
}
