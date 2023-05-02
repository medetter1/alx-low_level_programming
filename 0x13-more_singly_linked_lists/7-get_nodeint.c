#include "lists.h"
/**
 * get_nodeint_at_index - function that search for a node
 * @head: pointer of the lincked list
 * @index: index of the node starting in 0
 *
 * Return: value in the index node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *res = head;

	while (res)
	{
		if (counter == index)
		{
			return (res);
		}
		res = res->next;
		counter++;
	}
	return (NULL);
}
