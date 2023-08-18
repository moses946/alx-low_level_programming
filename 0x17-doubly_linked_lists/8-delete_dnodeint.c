#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * delete_dnodeint_at_index - Deletes node at a specific index
  * @head: Pointer to pointer to head of dlistint_t
  * @index: Index of node that should be deleted
  *
  * Return: 1 on success and -1 on faliure
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *deleted_node;

	if (*head == NULL)
		return (-1);
	deleted_node = *head;
	if (index == 0)
	{
		*head = deleted_node->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(deleted_node);
		return (1);
	}
	while (*head != NULL)
	{
		if (count == index - 1)
			break;
		count++;
		*head = (*head)->next;
	}
	deleted_node = (*head)->next;
	(*head)->next = deleted_node->next;
	*head = deleted_node->next;
	(*head)->prev = deleted_node->prev;
	free(deleted_node);
	while ((*head)->prev != NULL)
		*head = (*head)->prev;
	return (1);
}
