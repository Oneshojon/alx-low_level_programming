#include "lists.h"

/**
 *free_dlistint - Frees doubly linked list
 *@head: Pointer to the first node
 *
 *Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
