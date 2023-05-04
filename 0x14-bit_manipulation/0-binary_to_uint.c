#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - function converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result, base;
	int i;

	result = 0;
	i = 0;
	base = 1;
	if (b == NULL)
		return (0);

	while (*(b + i))
	{
		if (*(b + i) != '0' && *(b + i) != '1')
			return (0);
		i++;
	}
	for (i--; i >= 0; i--)
	{
		if (*(b + i) == '1')
			result = result + base;
		base = base * 2;
	}

	return (result);
}
