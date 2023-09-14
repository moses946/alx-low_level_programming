#include "hash_tables.h"

/**
  * hash_table_create - Creates an empty hash table
  * @size: size of the array
  *
  * Return: Pointer to the hash table(On success) or NULL(On faliure)
  */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_node_t **array;
    hash_table_t *ht;
    long unsigned int i;

    array = malloc(sizeof(hash_node_t *) * size);
    if (array == NULL)
        return (NULL);
    for (i = 0; i < size; i++)
        array[i] = NULL;
    ht = malloc(sizeof(hash_table_t));
    if (!ht)
        return (NULL);
    ht->size = size;
    ht->array = array;
    return (ht);
}
