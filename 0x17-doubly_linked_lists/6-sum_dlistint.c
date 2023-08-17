#include "lists.h"
#include <stdio.h>

/**
  * sum_dlistint - Calculates the sum of all data in dlistint_t list
  * @head: Pointer to head of the dlistint_t list
  *
  * Return: Sum of all the data or 0 if list is empty
  */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
