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
	int i;

	i = 0;

	p = malloc(sizeof(str));
	if (str == NULL || p == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		p[i] = str[i];
		i++;
	}
		p[i + 1] = '\0';
	return (p);
}
