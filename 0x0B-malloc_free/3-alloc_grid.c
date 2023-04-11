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

	p = malloc(sizeof(int *));

	if (height <= 0 || width <= 0)
		return (NULL);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		p[i] = (int *) malloc(width * sizeof(int));
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
return (p);
}
