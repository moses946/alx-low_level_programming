#include <string.h>
#include "lists.h"
#include <stdio.h>
/**
 * add_node_end - Adds a new node at the end
 * @head: Start of list
 * @str: String variable for new node
 *
 * Return: Address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;
	while (*head)
		head = head->next;
	(*head)->next = new_node;

	return (new_node);
}
