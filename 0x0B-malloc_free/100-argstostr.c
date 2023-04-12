#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments
 * @ac: number of parameters
 * @av: array
 * Return: char array
 */
char *argstostr(int ac, char **av)
{
	int i, j, counter, k;
	char *p;

	counter = 0;
	k = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			counter++;
		}
	}
	counter = (counter + ac) + 1;
	p = malloc(counter * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{	p[k] = av[i][j];
				k++;
		}
		if (p[k] == '\0')
		{
			p[k++] = '\n';
		}
	}
	return (p);
}
