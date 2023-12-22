#include "ht.h"

void free_item(Ht_item *item)
{
	    /*Frees an item*/
	free(item->key);
	free(item->value);
	free(item);
}

void free_table(HashTable *table)
{
	    /*Frees the table.*/
	int i;

	for (i = 0; i < table->size; i++)
	{
		Ht_item *item = table->items[i];

		if (item != NULL)
			free_item(item);
	}
	free(table->items);
	free(table);
}
