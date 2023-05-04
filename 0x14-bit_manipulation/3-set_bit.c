#include "main.h"
/**
 * set_bit - function change the value of a bit by index to 1.
 * @n: A pointer to the bit.
 * @index: The index to set the value at - indices start at 0.
 *
 * Return: 1 Otherwise -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 0;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	m = 1 << index;
	*n =  *n | m;
	return (1);
}
