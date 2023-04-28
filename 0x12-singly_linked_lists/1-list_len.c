#include <stdio.h>
#include "lists.h"

/**
 * list_len - function to print numbers of elements
 * @h: position of the singly linked
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
