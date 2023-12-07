#include "lists.h"

/**
 *insert_dnodeint_at_index - inserts a new node in a given index
 *@h: pointer the linked list
 *@idx: Location to insert the new node
 *@n: Value to place in the node
 *
 *Return: Address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current = *h;
	unsigned int i = 1;
	size_t list_len = dlistint_len(*h);

	if (idx > list_len)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (current)
	{
		if (idx == i)
		{
			new_node->next = current->next;
			new_node->prev = current;
			if (current->next)
				current->next->prev = new_node;
			current->next = new_node;
			return (new_node);
		}
		current = current->next;
		i++;
	}
	return (NULL);
}
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
