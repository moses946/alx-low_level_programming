#include "hash_tables.h"

/**
	* key_index -  Returns index of a key
	* @key: Key
	* @size: size of array of hash table
	*
	* Return: Index where key/value pair is stored
	*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
		unsigned long int hash_val, idx;

		hash_val = hash_djb2(key);
		idx = hash_val % size;
		return (idx);
}
