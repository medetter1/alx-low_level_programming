#include <string.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_node_end -function to add new node end
 * @head: pointer of node
 * @str: string with info
 *
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nd;
	list_t *ls;
	int i = 0;

	nd = malloc(sizeof(list_t));
	ls = *head;
	if (nd == NULL)
		return (NULL);
	while (str[i])
		i++;
	nd->len = i;
	nd->str = strdup(str);
	nd->next = NULL;
	if (*head == NULL)
	{
		*head = nd;
		return (nd);
	}
	while (ls->next != NULL)
		ls = ls->next;
	ls->next = nd;

	return (nd);
}
