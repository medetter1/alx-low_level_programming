#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the element
 */
int pop_listint(listint_t **head)
{
	listint_t *res = *head;
	int number = 0;

	if (head == NULL)
		return (0);

	number = res->n;
	*head = res->next;
	if (res != NULL)
	{
		free(tmp);
		return (number);
	}
	return (number);
}
