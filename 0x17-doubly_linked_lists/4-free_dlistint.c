#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * free_dlistint - Frees a dlistint_t list
  * @head: Pointer to the head of a dlistint_t list
  *
  */
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		if (head->next == NULL)
		{
			free(head);
			break;
		}
		else
		{
			head = head->next;
			free(head->prev);
		}
	}
}
