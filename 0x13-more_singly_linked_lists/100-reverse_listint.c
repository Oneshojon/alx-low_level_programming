#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 *reverse_listint - pointer to the stringed list
 *@head: Pointer to the first node
 *
 *Return: pointer to the list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node1, *node2;

	node1 = NULL;
	node2 = NULL;

	while (*head != NULL)
	{
		node2 = (*head)->next;
		(*head)->next = node1;
		node1 = *head;
		*head = node2;
	}
	*head = node1;
	return (*head);
}
