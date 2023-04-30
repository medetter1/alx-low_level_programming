#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add integer element to list
 * @head: list
 * @n: the value of the node
 * Return: adress of the last node insered
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *lastNode;

	node = malloc(sizeof(listint_t));
	lastNode = *head;

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	while (lastNode->next != NULL)
	{
		lastNode = lastNode->next;
	}
	lastNode->next = node;
	return (node);
}
