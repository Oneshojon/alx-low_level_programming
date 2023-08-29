#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 *add_nodeint_end - Adds a node to the end of a singly linked list
 *@head: pointer to the first node
 *@n: int to be contained in the new node
 *
 *Return: Pointer or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}
	return (new_node);
}
