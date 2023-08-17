#include "lists.h"
#include <stdio.h>

/**
  * get_dnodeint_at_index - Returns the nth node of a dlistint_t list
  * @head: Pointer to first node of the dlistint_t list
  * @index: Index of node to be returned
  *
  * Return: nth node of the list or NULL
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}
	return (NULL);
}
