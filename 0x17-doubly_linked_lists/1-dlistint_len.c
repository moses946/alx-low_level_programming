#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * dlistint_len - Returns the number of elements in a Dlinked list
  * @h: Pointer to head of the Dlinked list
  *
  * Return: Number of elements
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		node++;
		h = h->next;
	}
	return (node);
}

