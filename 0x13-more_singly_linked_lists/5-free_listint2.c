#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 *free_listint2 - frees a memory and assigne NUll to the head pointer
 *@head: pointer to the head
 *
 *Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
