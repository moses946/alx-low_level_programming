#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
/** struct list_s - singly linked list @str: string - (malloc'ed string) @len:
 * length of the string @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
/** _strlen - Returns the length of a string @str: The string
  *
  * Return: Length of string
  */
unsigned int _strlen(char *str)
{ 
	unsigned int i = 0;

	while (str[i])
	{
		i++;
	}
	return (i);
}
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
#endif
