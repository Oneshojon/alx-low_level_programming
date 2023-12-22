#include "ht.h"

Ht_item *create_item(char *key, char *value)
{
	Ht_item *item = malloc(sizeof(Ht_item));
	item->key = malloc(strlen(key) + 1);

	item->value = malloc(strlen(value) + 1);
	strcpy(item->key, key);
	strcpy(item->value, value);
	return (item);
}

/*The tabble*/
HashTable *create_table(int size)
{
	HashTable *table = malloc(sizeof(HashTable));

	table->size = size;
	table->count = 0;
	table->items = calloc(table->size, sizeof(Ht_item *));

	for (int i = 0; i < table->size; i++)
		table->items[i] = NULL;
	return (table);
}
