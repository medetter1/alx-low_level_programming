#include "main.h"
#include <stdio.h>
/**
 * print_diag_right - function right diagonal
 * @a: array pointer
 * @size: array size
 * Return: integer
 */
int print_diag_right(int *a, int size)
{
	int i, j, s;

	s = 0;
	for (i = 0, j = size - 1; i != size && j != -1; i++, j--)
	{
		s = s + *(a + (i * size) + j);
	}
	return (s);
}
/**
 * print_diag_left - function left diagonal
 * @a: array
 * @size: array size
 * Return: integer
 */
int print_diag_left(int *a, int size)
{
	int i, j, s;

	i = 0;
	j = 0;
	s = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				s = s + *(a + (i * size) + j);
			}

		}
	}
	return (s);
}

/**
 * print_diagsums - function diagonal
 * @a: array 2d pointer
 * @size: size array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	sum1 = print_diag_left(a, size);
	printf("%d,", sum1);
	printf(" ");
	sum2 = print_diag_right(a, size);
	printf("%d\n", sum2);
}
