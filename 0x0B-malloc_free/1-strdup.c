#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copy string inside array
 * @str: string array
 * Return: array
 */
char *_strdup(char *str)
{
	char *p;
	int i, j;

	i = 0;
	j = 0;
	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		i++;
	}
	i = i + 1;
	p = malloc(sizeof(char) * i);
	if (p == NULL)
		return (NULL);
	while (j <= i)
	{
		p[j] = str[j];
		j++;
	}
	return (p);
}
