#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 *listint_len - Returns the number of nodes in a linked list
 *@h: pointer to string
 *
 *Return: a value
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != 0)
	{
		h = h->next;
		count++;
	}
	return (count);
}
