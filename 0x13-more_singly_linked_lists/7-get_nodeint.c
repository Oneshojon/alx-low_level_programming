#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 *get_nodeint_at_index - returns the nth node
 *@head: pointer to the string
 *@index: The index of the needed node
 *
 *Return: A pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count = 0;

	if (head != NULL)
	{
		temp = head;
		while (temp != NULL)
		{
			if (count == index)
			{
				return (temp);
			}
			temp = temp->next;
			count++;
		}
	}
	return (NULL);
}
