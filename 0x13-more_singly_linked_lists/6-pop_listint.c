#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 *pop_listint - deletes the head node
 *@head: pointer to the head node
 *
 *Return: Int
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head != NULL && head != NULL)
	{
		temp = *head;
		data = temp->n;
		*head = (*head)->next;
		free(temp);
	}
	return (data);
}
