#include <stddef.h>
#include "lists.h"

/**
 *list_len - Returns the number of elements on a linked list
 *@h: The provided string
 *
 *Return: Number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next; /*move to the next node*/
		count++;
	}
	return (count);
}
