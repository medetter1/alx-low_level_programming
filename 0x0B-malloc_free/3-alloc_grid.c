#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - print array 2d
 * @height: row of array
 * @width: column of array
 * Return: 2d array integer
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);
	p = malloc(height * sizeof(int *));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(p[j]);
			free(p);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
return (p);
}
