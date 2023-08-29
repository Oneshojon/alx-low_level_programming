#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 *delete_nodeint_at_index - deletes a node at a given index
 *@head: pointer to the linked list
 *@index: position of item to delete
 *
 *Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *current;
	unsigned int count = 0;

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			if (index == count + 1)
			{
				temp = current->next;
				current->next = temp->next;
				free(temp);
				return (1);
			}
			current = current->next;
			count++;
		}
		return (-1);
	}
}
