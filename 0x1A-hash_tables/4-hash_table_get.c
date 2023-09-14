#include "hash_tables.h"

/**
  * hash_table_get - Retrieves a value associated with a key
  * @ht: Hash table
  * @key: Key
  *
  * Return: Value associated with key or NULL
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *node;

	if (!ht || !key)
		return (NULL);
	idx = key_index((unsigned char *)key, ht->size);
	node  = ht->array[idx];
	if (!node)
		return (0);
	if (strcmp(key, node->key) == 0)
	{
		return (node->value);
	}
	else
	{
		while (node)
		{
			if (strcmp(key, node->key) == 0)
				return (node->value);
			node = node->next;
		}
	}
	return (NULL);
}
