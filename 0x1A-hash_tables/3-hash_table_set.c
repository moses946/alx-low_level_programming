#include "hash_tables.h"

/**
  * hash_table_set - Adds an element to the hash table
  * @ht: Hash Table
  * @key: Key
  * @value: Value
  *
  * Return: 1(on success) or 0 (on faliure)
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int idx;

	if (!key)
		return (0);
	node  = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->value = malloc(sizeof(char) * (strlen(value) + 1));
	node->key = malloc(sizeof(char) * (strlen(key) + 1));
	if (!node->value || !node->key)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	strcpy(node->key, key);
	strcpy(node->value, value);
	if (!ht->array[idx])
	{
		node->next = NULL;
		ht->array[idx] = node;
	}
	else
	{
		if (strcmp(ht->array[idx]->key, key) == 0)
			strcpy(ht->array[idx]->value, value);
		else
		{
			node->next = ht->array[idx];
			ht->array[idx] = node;
		}
	}
	return (1);
}
