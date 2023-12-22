#ifndef ht_h
#define ht_h
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CAPACITY 50000 /* Size of the HashTable.*/
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;

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
