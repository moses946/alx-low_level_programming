#include "hash_tables.h"

/**
  * hash_table_delete - Deletes a hash_table
  * @ht: Hash table
  *
  */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *temp;
	int i = 0;

	if (!ht)
		return;

	for (; (unsigned long)i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			temp = current;
			current = current->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
