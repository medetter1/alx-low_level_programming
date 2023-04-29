#include "lists.h"
#include <stdio.h>
/**
 * listint_len - function get number of elements
 * @h: list pointer
 * Return: integer
 *
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
