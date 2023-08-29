#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 *sum_listint - sums all the data in the list
 *head: pointer to the string
 *
 *Return: The sum of the numbers
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
