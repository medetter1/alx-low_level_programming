#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory with malloc.
 * @b: size of new memory array.
 *
 *
 * Return: void.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
