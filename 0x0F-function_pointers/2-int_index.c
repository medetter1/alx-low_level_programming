#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - function searches an integer
 * @array: pointer integer array
 * @size: size array
 * @cmp: function compare
 *
 * Return: Void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		cmp(array[i]);
		if (cmp(array[i]) == 1)
		{
			return (i);
		}
	}
	return (-1);
}
