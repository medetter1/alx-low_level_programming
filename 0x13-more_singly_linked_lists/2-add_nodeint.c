#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add integer element to list
 * @head: list
 * @n: the value of the node
 * Return: adress of node insered
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
