#include "lists.h"
#include <stdio.h>
/**
 * add_node - adds a new node at the begining of a list
 * @head: pointer to pointer to the head of list
 * @str: The string to be copied to the new node
 *
 * Return: Address to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = (*head);
	(*head) = new_node;
	
	return (*head);
}
