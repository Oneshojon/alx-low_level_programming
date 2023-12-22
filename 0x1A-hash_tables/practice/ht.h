#ifndef ht_h
#define ht_h
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CAPACITY 50000 /* Size of the HashTable.*/
/**
 *struct Ht_item - Defines the HashTable item.
 *@key:
 *@value
 *Deascription:
 */
typedef struct Ht_item
{
	    char *key;
	    char *value;
} Ht_item;

/**
 *Defines the HashTable.
 *@items:
 *@size:
 *@count
 */
typedef struct HashTable
{
	Ht_item **items;
	LinkedList **overflow_buckets;
	int size;
	int count;
} HashTable;

Ht_item *create_item(char *key, char *value);
void free_table(HashTable *table);
void free_item(Ht_item *item);
HashTable *create_table(int size);
void print_table(HashTable *table);
void ht_insert(HashTable *table, char *key, char *value);
void handle_collision(HashTable *table, unsigned long index, Ht_item *item);
char *ht_search(HashTable *table, char *key);
void print_search(HashTable *table, char *key);
LinkedList **create_overflow_buckets(HashTable *table);
void free_overflow_buckets(HashTable *table);
void ht_delete(HashTable *table, char *key);
unsigned long hash_function(char *str);

/*Handle Collision*/
/**
 *struct LinkedList - Defines structure for a linked list.
 *@item:
 *@next: Pointer to the next node.
 */
typedef struct LinkedList
{
	Ht_item *item;
	struct LinkedList *next;
} LinkedList;

LinkedList *allocate_list();
LinkedList *linkedlist_insert(LinkedList *list, Ht_item *item);
Ht_item *linkedlist_remove(LinkedList *list);
void free_linkedlist(LinkedList *list);

#endif
