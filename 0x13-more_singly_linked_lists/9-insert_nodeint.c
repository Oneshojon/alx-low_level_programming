#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 *insert_nodeint_at_index - inserts a node at a given position
 *@head: pointer to the link
 *@idx: Index where the new node will be placed
 *@n: The value to place in the new node
 *
 *Return: pointer or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *temp, *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	count += 1;
	temp = *head;
	while (temp != NULL)
	{
		if (count == idx)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
		temp = temp->next;
		count++;
	}
	free(new_node);
	return (NULL);
}
