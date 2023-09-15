#include "hash_tables.h"

/**
  * hash_table_print - Prints a hash table
  * @ht: Hash table
  *
  */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	int i = 0, pr_commas = 0;

	if (ht)
	{
		printf("{");
		while ((unsigned long)i < ht->size)
		{
			if (!ht->array[i++])
				continue;
			node  = ht->array[--i];
			while (node)
			{
				if (pr_commas == 1)
					printf(", ");

				pr_commas = 1;
				printf("'%s': '%s'", (char *) node->key, (char *) node->value);

				node  = node->next;
			}
			i++;
		}
		printf("}\n");
	}
}
