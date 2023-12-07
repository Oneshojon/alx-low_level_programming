#include "lists.h"

/**
 *get_dnodeint_at_index - Returns the enth node of a linked list
 *@head: pointer to the first node
 *@index: Indedex of the node to be returned
 *
 *Return: pointer to the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int i = 0;

	while (node)
	{
		if (i == index)
			return (node);
		node = node->next;
		i++;
	}
	return (NULL);
}
