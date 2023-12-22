#include "ht.h"

void ht_insert(HashTable *table, char *key, char *value)
{
	/* Creates the item.*/
	Ht_item *item = create_item(key, value);
	/*Computes the index.*/
	int index = hash_function(key);
	Ht_item *current_item = table->items[index];

	if (current_item == NULL)
	{
		/* Key does not exist.*/
		if (table->count == table->size)
		{
			/* HashTable is full.*/
			printf("Insert Error: Hash Table is full\n");
			free_item(item);
			return;
		}
		/* Insert directly.*/
		table->items[index] = item;
		table->count++;
	}
	else
	{
		/* Scenario 1: Update the value.*/
		if (strcmp(current_item->key, key) == 0)
		{
			strcpy(table->items[index] -> value, value);
			return;
		}
		else
		{
			 /* Scenario 2: Handle the collision.*/
			handle_collision(table, index, item);
			return;
		}
	}
}

/**
 *handle_collision - handles collision.
 *@table: table
 *@index: Index
 *@item: item
 *Return: Nothing
 */
void handle_collision(HashTable *table, unsigned long index, Ht_item *item)
{
	LinkedList *head = table->overflow_buckets[index];

	if (head == NULL)
	{
		/*Creates the list.*/
		head = allocate_list();
		head->item = item;
		table->overflow_buckets[index] = head;
		return;
	}
	else
	{
		/*Insert to the list.*/
		table->overflow_buckets[index] = linkedlist_insert(head, item);
		return;
	}
}

