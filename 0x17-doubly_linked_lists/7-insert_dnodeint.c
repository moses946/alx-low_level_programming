#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * insert_dnodeint_at_index - Inserts a new node at a given index
  * @h: dlistint_t list
  * @idx: Index to add new node
  * @n: integer
  *
  * Return: Address of new node or NULL on faliure
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *new_node;

	new_node = (struct dlistint_s *) malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	while (h != NULL)
	{
		if (count == idx - 1)
			break;
		count++;
		*h = (*h)->next;
	}
	if (count != idx || h == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = (*h)->next;
	(*h)->next = new_node;
	new_node->prev = *h;
	*h = new_node->next;
	(*h)->prev = new_node;
	while ((*h)->prev != NULL)
		*h = (*h)->prev;
	return (new_node);
}
