#include <stdio.h>
#include "lists.h"

/**
 * print_list - function to print all the elements
 * @h: position of the singly linked
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
		{
		if (h->s == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->s);
		h = h->next;
		i++;
		}
	return (i);
}
