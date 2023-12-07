#include "lists.h"

/**
 *dlistint_len - counts the number of element in a doubly linked list
 *@h: Pointer to the first node
 *
 *Return: length of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *node;

	node = h;
	while (node)
	{
		len++;
		node = node->next;
	}
	return (len);
}
