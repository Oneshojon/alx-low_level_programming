#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t list
 * @head: Pointer to the first node of the doubly linked list
 * @index: Index of the node to be deleted
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i, j;
	dlistint_t *current, *node = *head;

	while (node)
	{
		j++;
		node = node->next;
	}
	if (index > j)
		return (-1);
	if (*head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = current->next;
		if (*head)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	for (i = 0; current != NULL && i < index; i++)
		current = current->next;
	if (current->prev)
		current->prev->next = current->next;
	if (current->next)
		current->next->prev = current->prev;
	free(current);
	return (1);
}

