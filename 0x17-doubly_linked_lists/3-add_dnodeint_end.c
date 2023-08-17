#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * add_dnodeint_end - Adds new node at end of a dlistint_t
  * @head: Pointer to pointer to the head of the list
  * @n: integer
  *
  * Return: Address of new element or NULL on faliure
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = (struct dlistint_s *) malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	while (*head != NULL && (*head)->next != NULL)
		*head = (*head)->next;
	if (*head != NULL)
	{
		new_node->prev = *head;
		(*head)->next = new_node;
		new_node->next = NULL;
	}
	else
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*head = new_node;
	}
	while ((*head)->prev != NULL)
		*head = (*head)->prev;
	return (new_node);
}
