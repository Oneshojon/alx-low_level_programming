iinclude "ht.c"

/**
 *allocate_list - Allocates memoey for a LinkedList.
 *Return: List
 */
LinkedList *allocate_list()
{
	LinkedList *list = malloc(sizeof(LinkedList));
	return (list);
}

/**
 *linkedlist_insert - Add a node to the linked list.
 *@list: Pointer to the linked list.
 *@item: data to add
 *
 *Return: Pointer to linked list.
 */
LinkedList *linkedlist_insert(LinkedList *list, Ht_item *item)
{
	if (!list)
	{
		LinkedList *head = allocate_list();
		LinkedList *node, *temp;

		head->item = item;
		head->next = NULL;
		list = head;
		return (list);
	}
	else if (list->next == NULL)
	{
		node = allocate_list();
		node->item = item;
		node->next = NULL;
		list->next = node;
		return (list);
	}
	temp = list;
	while (temp->next->next)
	{
		temp = temp->next;
	}
	LinkedList *node = allocate_list();
	node->item = item;
	node->next = NULL;
	temp->next = node;
	return (list);
}
/**
 *linkedlist_remove - removes the head from a list.
 *@list: Pointer to the head.
 *
 *Return: The item of the popped element.
 */
Ht_item *Linkedlist_remove(LinkedList *list)
{
	if (!list)
		return (NULL);
	if (!list->next)
		return (NULL);
	LinkedList *node = list->next;
	LinkedList *temp = list;

	temp->next = NULL;
	list = node;
	Ht_item *it = NULL;

	memcpy(temp->item, it, sizeof(Ht_item));
	free(temp->item->key);
	free(temp->item->value);
	free(temp->item);
	free(temp);
	return it;
}
/**
 *free_linkedlist - frees a linked list.
 *@list: Pointer to the list
 *Return: Nothing
 */
void free_linkedlist(LinkedList* list)
{
	LinkedList *temp = list;

	while(list)
	{
		temp = list;
		list = list->next;
		free(temp->item->key);
		free(temp->item->value);
		free(temp->item);
		free(temp)
	}
}
