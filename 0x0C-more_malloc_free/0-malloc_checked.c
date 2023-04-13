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
	void *memLoc;

	memLoc = malloc(b);
	if (memLoc == NULL)
		exit(98);
	return (memLoc);
}
