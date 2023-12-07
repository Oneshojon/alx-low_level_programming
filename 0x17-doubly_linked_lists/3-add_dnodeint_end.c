#include "lists.h"

/**
 *add_dnodeint_end - Add a new node to the end of a linked list
 *@head: Pointer to the first node of the doubly linked list
 *@n: Number to add to the list
 *
 *Return: Address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = *head, *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (!node)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	while (node->next)
		node = node->next;

	node->next = new_node;
	new_node->prev = node;

	return (new_node);

}
