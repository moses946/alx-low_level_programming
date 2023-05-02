#include "lists.h"
#include <stdio.h>
/**
 * list_len - Returns the number of elements in a list
 * @h: Linked list
 *
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
