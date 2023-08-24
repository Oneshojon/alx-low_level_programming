#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *print_list - prints all the elements of a list_t
 *@h: The provided string
 *
 *Return: Nothing
 */
size_t print_list(const list_t *h)
{
	size_t count = 0; /*initialize count for number of nodes*/

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
