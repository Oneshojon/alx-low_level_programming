#include "ht.h"

/**
 *create_overflow_buckets - Creates an array of linked lists
 *@table: The hash table
 *
 *Return: Pointer to array of LinkedLists
 */
LinkedList **create_overflow_buckets(HashTable *table)
{
	LinkedList **buckets = calloc(table->size, sizeof(LinkedList *));
	int i;

	for (i = 0; i < table->size; i++)
		buckets[i] = NULL;
	return (buckets);
}
/**
 *free_overflow_buckets - frees bucket
 *@table: table
 *Return:Nothing
 */

void free_overflow_buckets(HashTable *table)
{
	LinkedList **buckets = table->overflow_buckets;

	for (int i = 0; i < table->size; i++)
		free_linkedlist(buckets[i]);
	free(buckets);
}

/**
 *create_table - Creates a new HashTable
 *@size: Size of table.
 *Return: Pointer to the table.
 */
HashTable *create_table(int size)
{
	int i;
	HashTable *table = malloc(sizeof(HashTable));

	table->size = size;
	table->count = 0;
	table->items = calloc(table->size, sizeof(Ht_item *));
	for (i = 0; i < table->size; i++)
		table->items[i] = NULL;
	table->overflow_buckets = create_overflow_buckets(table);
	return (table);
}
/**
 *free_table - frees the table
 *@table: pinter to table
 *Return: Nothing
 */
void free_table(HashTable *table)
{
	int i;
	Ht_item *item = table->items[i];

	for (i = 0; i < table->size; i++)
	{
		Ht_item *item = table->items[i];

		if (item != NULL)
			free_item(item);
	}
	/*Free the overflow bucket lists and its items.*/
	free_overflow_buckets(table);
	free(table->items);
	free(table);
}

