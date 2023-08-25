#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 *free_list - frees list_t
 *@head: The pointer to the first element
 *
 *Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
