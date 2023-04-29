#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function to print all  elements
 * @h: position of the singly linked
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
