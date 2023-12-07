#include "lists.h"

/**
 *sum_dlistint - SUms up all data in a linked list
 *@head: Pointer to the first node
 *
 *Return: Sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int sum = 0;

	if (node == NULL)
		return (sum);
	while (node)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
