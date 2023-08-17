#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * add_dnodeint - Adds a new node at the begining of a Dlinked list
  * @head: Pointer to pointer of the head
  * @n: integer
  *
  * Return: Address of new element or NULL if it fails
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = (struct dlistint_s *) malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*head != NULL)
	{
		head->prev = new_node;
		new_node->next = head;
		head = new_node;
	}
	else
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		*head = new_node;
	}
	return (new_node);
}
