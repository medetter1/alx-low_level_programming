#include <stdlib.h>
#include "main.h"

/**
 * _calloc - function that allocates memory of array
 * @nmemb: first parameter
 * @size: second parameter
 *
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i, t;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	t = nmemb * size;
	for (i = 0; i < t; i++)
	{
		p[i] = 0;
	}
	return (p);
}
