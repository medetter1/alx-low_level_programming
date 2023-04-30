#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to a linked list
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *res;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		res = (*head)->next;
		free(*head);
		*head = res;
	}

	*head = NULL;
}
