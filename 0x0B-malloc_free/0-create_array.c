#include "main.h"
#include <stdlib.h>
/**
 * create_array - array with dynamic allocation
 * @size: size of array
 * @c: intilize array with character c
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(sizeof(char) * size);

	if (size == 0 || p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
