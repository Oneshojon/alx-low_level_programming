#include "ht.h"
/**
 *ht_search - Searches for the key in the HashTable.
 *Return: NULL if it doesn't exist.
 */

char *ht_search(HashTable *table, char *key)
{
	int index = hash_function(key);
	Ht_item* item = table->items[index];

	if (item != NULL)
	{
		if (strcmp(item->key, key) == 0)
			return item->value;
	}
	return NULL;
}

/**
 *print_search - Displays the item that matches the key
 *Return: Nothing
 */
void print_search(HashTable *table, char *key)
{
	char* val = ht_search(table, key);

	if (val == NULL)
	{
		printf("Key:%s does not exist\n", key);
		return;
	}
	else
		printf("Key:%s, Value:%s\n", key, val);
}
