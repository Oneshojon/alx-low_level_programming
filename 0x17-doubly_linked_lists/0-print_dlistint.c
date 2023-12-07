
#include "lists.h"
/**
 *print_dlistint - prints all the elements os a dlistint_t list
 *@h: Pointer to the first node
 *
 *Return: The number of nodes printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *node;

	node = h;
	while (node)
	{
		printf("%d\n", node->n);
		node = node->next;
		count++;
	}
	return (count);
}
