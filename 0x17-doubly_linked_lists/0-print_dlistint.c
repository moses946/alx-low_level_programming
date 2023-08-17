#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_dlistint - Prints all the elements of a Dlinked list
  * @h: Pointer to the head of the Dlinked list
  *
  * Return: Number of nodes
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		node++;
		h = h->next;
	}
	return (node);
}
