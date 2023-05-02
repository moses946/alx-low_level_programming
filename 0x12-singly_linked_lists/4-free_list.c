#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_list - Frees a list
 * @head: Start of list
 */
void free_list(list_t *head)
{
	list_t *next;

	while (head)
	{
		next = head->next;
		free(head->str);
		free(head);
		head = next;
	}
}
