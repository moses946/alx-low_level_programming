#include <string.h>
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_node_end - Adds a new node at the end
 * @head: Start of list
 * @str: String variable for new node
 *
 * Return: Address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i = 0;
	list_t *new_node, *last = *head;

	while (str[i])
	{
		i++;
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;
	while (*head == NULL)
	{
		(*head) = new_node;
		return (*head);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new_node;
	return (new_node);
}
